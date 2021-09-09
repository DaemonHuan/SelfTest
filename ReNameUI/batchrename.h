#ifndef BATCHRENAME_H
#define BATCHRENAME_H

#include <QWidget>

namespace Ui {
class BatchReName;
}

class BatchReName : public QWidget
{
    Q_OBJECT
    
public:
    explicit BatchReName(QWidget *parent = 0);
    ~BatchReName();

    QList<QString> getFileList(const QString path);
    void resetTableView();
    
private slots:
    void doLoadFileList();
    void doFilesReName();
    void doReNameFormart(int flag = 0);

    void on_si_flag_valueChanged(int arg1);

private:
    Ui::BatchReName *ui;
    QString extends;
    QString filepath;
};

#endif // BATCHRENAME_H
