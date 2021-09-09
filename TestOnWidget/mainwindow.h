#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

typedef int BOOL;

//#include "AXObject/dbcommocxlibef5.h"

namespace Ui { class MainWindow; }

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void TT_Qstack();
    void TT_jmetaclass();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

//    CDbCommInterface m_dbCommInterface;
//    DbCommOcxLibEF5::DbCommOcxEF5 m_DBCommOCXEF5;

};

#endif // MAINWINDOW_H
