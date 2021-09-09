#ifndef JMETACLASS_H
#define JMETACLASS_H

#include <QObject>
#include <QMetaObject>


/** ==== ** ==== ** ==== ** ==== ** ==== ** ==== ** ==== ** ==== **
 ** 2021.08.24  -- from jk ..
 **
 **
 ** ==== ** ==== ** ==== ** ==== ** ==== ** ==== ** ==== ** ==== **/

class JMetaClass : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString text READ text WRITE setText NOTIFY textChange)
    Q_PROPERTY(QString text MEMBER m_text)

public:
    explicit JMetaClass(QObject *parent = nullptr);

    void init();

    Q_INVOKABLE QString text();
    Q_INVOKABLE void setText(const QString &str);

signals:
    void textChange();

private:
    QString m_text;

};

#endif // JMETACLASS_H
