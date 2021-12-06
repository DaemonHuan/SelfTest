#ifndef _JK_FRAMELESSWIDGET_HPP
#define _JK_FRAMELESSWIDGET_HPP

#include <QWidget>
#include <QMouseEvent>

#include <QDebug>

const unsigned int PADDING = 2;

template<class T>
class CFramelessWidget : public T
{
public:
    explicit CFramelessWidget(T *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags()) :
        T(parent) {
        T::setWindowFlags(T::windowFlags() | f | Qt::FramelessWindowHint);
        T::setMouseTracking(true);
    }

    void installParentFilter(QList<QObject*> list) {
        foreach(QObject *obj, list) obj->installEventFilter(this);
    }

private:
    enum Direction { UP, DOWN, LEFT, RIGHT, LEFTTOP, LEFTBOTTOM, RIGHTBOTTOM, RIGHTTOP, NONE };

    bool isLeftPressDown = false;
    bool isMove = false;
    QPoint dragPosition = QPoint(0 ,0);
    Direction direct = NONE;

    inline void judgeRegionSetCursor(const QPoint& currentPoint) {
        // 获取窗体在屏幕上的位置区域，tl为topleft点，rb为rightbottom点
        auto tl = T::mapToGlobal(T::rect().topLeft());
        auto rb = T::mapToGlobal(T::rect().bottomRight());
        auto x = currentPoint.x();
        auto y = currentPoint.y();
        if ((tl.x() + PADDING) >= x && tl.x() <= x && (tl.y() + PADDING) >= y && tl.y() <= y) {
            direct = LEFTTOP;
            this->setCursor(QCursor(Qt::SizeFDiagCursor));
        } else if ((x >= rb.x() - PADDING) && x <= rb.x() && y >= (rb.y() - PADDING) && y <= rb.y()) {
            direct = RIGHTBOTTOM;
            this->setCursor(QCursor(Qt::SizeFDiagCursor));
        } else if (x <= (tl.x() + PADDING) && x >= tl.x() && (y >= rb.y() - PADDING) && y <= rb.y()) {
            direct = LEFTBOTTOM;
            this->setCursor(QCursor(Qt::SizeBDiagCursor));
        } else if (x <= rb.x() && x >= rb.x() - PADDING && y >= tl.y() && y <= tl.y() + PADDING) {
            direct = RIGHTTOP;
            this->setCursor(QCursor(Qt::SizeBDiagCursor));
        } else if (x <= (tl.x() + PADDING) && x >= tl.x()) {
            direct = LEFT;
            this->setCursor(QCursor(Qt::SizeHorCursor));
        } else if (x <= rb.x() && x >= (rb.x() - PADDING)) {
            direct = RIGHT;
            this->setCursor(QCursor(Qt::SizeHorCursor));
        } else if (y >= tl.y() && y <= tl.y() + PADDING) {
            direct = UP;
            this->setCursor(QCursor(Qt::SizeVerCursor));
        } else if (y <= rb.y() && y >= (rb.y() - PADDING)) {
            direct = DOWN;
            this->setCursor(QCursor(Qt::SizeVerCursor));
        } else {
            direct = NONE;
            this->setCursor(QCursor(Qt::ArrowCursor));
        }
    }

protected:
    virtual bool event(QEvent *event) override {
        qDebug() <<"-- event .." <<event->type();

        if (event->type() == QEvent::Enter) this->enterEvent(event);
        return T::event(event);
    }

    virtual bool eventFilter(QObject *watched, QEvent *event) override {
        qDebug() <<"-- eventFilter .." <<watched <<event->type();
        if (QEvent::MouseMove == event->type()) isMove = true;
        if (QEvent::MouseButtonRelease == event->type()) isMove = false;
        if (QEvent::MouseButtonDblClick == event->type()) {
            if (T::isMaximized()) T::showNormal();
            else T::showMaximized();
        }

        return T::eventFilter(watched, event);
    }

    virtual void enterEvent(QEvent *event) override {
        this->setCursor(QCursor(Qt::ArrowCursor));
        direct = NONE;
        QWidget::enterEvent(event);
    }

    virtual void mouseReleaseEvent(QMouseEvent *event) override {
        isLeftPressDown = false;
        direct = NONE;
        T::releaseMouse();
        T::setCursor(QCursor(Qt::ArrowCursor));

        QWidget::mouseReleaseEvent(event);
    }

    virtual void mousePressEvent(QMouseEvent *event) override {
        judgeRegionSetCursor(event->globalPos());

        switch (event->button()) {
        case Qt::LeftButton:
            isLeftPressDown = true;
            if (direct != NONE) this->mouseGrabber();
            else dragPosition = event->globalPos() - this->frameGeometry().topLeft();
            break;

        default:
            QWidget::mousePressEvent(event);
            break;
        }
    }

    virtual void mouseMoveEvent(QMouseEvent *event) override {
        auto gloPoint = event->globalPos();
        auto tl = T::mapToGlobal(T::rect().topLeft());
        auto rb = T::mapToGlobal(T::rect().bottomRight());

        if (!isLeftPressDown) judgeRegionSetCursor(gloPoint);
        else if (direct != NONE) {
            QRect rMove(tl, rb);
            switch (direct) {
            case LEFT:
                if (rb.x() - gloPoint.x() <= this->minimumWidth())
                    rMove.setX(tl.x());
                else
                    rMove.setX(gloPoint.x());
                break;
            case RIGHT:
                rMove.setWidth(gloPoint.x() - tl.x());
                break;
            case UP:
                if (rb.y() - gloPoint.y() <= this->minimumHeight())
                    rMove.setY(tl.y());
                else
                    rMove.setY(gloPoint.y());
                break;
            case DOWN:
                rMove.setHeight(gloPoint.y() - tl.y());
                break;
            case LEFTTOP:
                if (rb.x() - gloPoint.x() <= this->minimumWidth())
                    rMove.setX(tl.x());
                else
                    rMove.setX(gloPoint.x());
                if (rb.y() - gloPoint.y() <= this->minimumHeight())
                    rMove.setY(tl.y());
                else
                    rMove.setY(gloPoint.y());
                break;
            case RIGHTTOP:
                rMove.setWidth(gloPoint.x() - tl.x());
                rMove.setY(gloPoint.y());
                break;
            case LEFTBOTTOM:
                rMove.setX(gloPoint.x());
                rMove.setHeight(gloPoint.y() - tl.y());
                break;
            case RIGHTBOTTOM:
                rMove.setWidth(gloPoint.x() - tl.x());
                rMove.setHeight(gloPoint.y() - tl.y());
                break;
            default:
                T::mouseMoveEvent(event);
                return;
            }

            T::setGeometry(rMove);
        } else if (isMove && !T::isMaximized()) {
            QWidget::move(event->globalPos() - dragPosition);
            event->accept();
        }

        QWidget::mouseMoveEvent(event);
    }
};


#endif // _JK_FRAMELESSWIDGET_HPP
