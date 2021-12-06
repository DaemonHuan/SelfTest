#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLibrary>
#include <QStringListIterator>
#include <QStringList>

#include <QThread>
#include <QDateTime>

#include <QDebug>
#include <QVariant>

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonValue>
#include <QJsonObject>

#include <QStack>
#include <QPair>
#include <QMetaMethod>

#include "jmetaclass.h"
#include "objecti.h"

typedef QVariant DataIndex;     // Int String
typedef QStack<QPair<DataIndex, QJsonValue>> DataPairStack;

#define OBJECTCKECK(obj) (QJsonValue(obj).isObject())

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    qDebug() <<"** db ocx enabled .." <<m_DBCommOCXEF5.isEnabled();
//    qDebug() <<"-- OpenLocalConnect .." <<m_DBCommOCXEF5.OpenLocalConnect(0);
//    QThread::sleep(2);
//    qDebug() <<"-- IsConnected .." <<m_DBCommOCXEF5.IsConnected();
//    qDebug() <<"-- GetAllTagCount .." <<m_DBCommOCXEF5.GetAllTagCount();

    /* ==== ** ==== ** ==== ** ==== ** ==== ** ==== ** ==== */
    /* ==== ** ==== ** ==== ** ==== ** ==== ** ==== ** ==== */

//    this->TT_Qstack();

    ObjectI obji;
    qDebug() <<"=====" <<obji.funA(1) <<obji.c_value;

    this->TT_jmetaclass();

    ui->label->setFixedSize(100, 100);
    ui->label->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    qDebug() <<"--" <<ui->label->size();

    //
    QPixmap pxm(":/image/a01.png");
//    pxm = pxm.scaled(ui->label->size(), Qt::IgnoreAspectRatio);

    ui->label->setContentsMargins(20, 20, 20, 20);
    ui->label->setPixmap(pxm);
    qDebug() <<"--" <<ui->label->size();

    ui->label->setScaledContents(true);
    qDebug() <<"--" <<ui->label->size();


//    pxm = pxm.scaled()

}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::TT_Qstack()
{
    QStack<QVariant> mstack;

    mstack.push("aa");
    mstack.push("bb");
    mstack.push("cc");

    QVariant cc = mstack.pop();
    qDebug() <<"TT_Qstack .." <<cc <<mstack <<mstack.top();

    mstack.push(100);

    qDebug() <<"TT_Qstack .." <<cc <<mstack <<mstack.top();


    QJsonObject obj;
    obj.insert("aa", 0);

    qDebug() <<OBJECTCKECK(obj);

    ////////////

    QJsonArray jsonarr;
    jsonarr.insert(0, "0");
    jsonarr.insert(1, "0");
    jsonarr.insert(2, "2");
    jsonarr.insert(3, "0");
    jsonarr.removeAt(2);
    jsonarr.insert(2, "1");

    qDebug() <<"== jsonarr" <<jsonarr;

    foreach (QJsonValue aa, jsonarr) {
        qDebug() <<aa.toVariant();
    }


//    QByteArray arr;
//    arr = QString("abcdef").toLocal8Bit();

//    QStringList ll = QString("abcdef").split(QRegExp("."),);
//    qDebug() <<"==" <<ll;

//    QJsonValue ss = QJsonValue(arr.data());
//    qDebug() <<"==" <<ss;



}

void MainWindow::TT_jmetaclass()
{
    JMetaClass *obj = new JMetaClass(this);
    qDebug() <<"--" <<obj->objectName() <<obj->property("text").toString();

    obj->setProperty("text", "Hello Meta ..");
    qDebug() <<"--" <<obj->objectName() <<obj->property("text").toString();

    //
    qDebug()<<"begin--------------------custom class method";
    const QMetaObject* cmjj = obj->metaObject();

    int icount = cmjj->methodCount();

    for(int i = 0; i < icount; i++) {
        QMetaMethod mm = cmjj->method(i);
        QByteArray byteArray = mm.name();
        //输出函数类型与函数名称
        qDebug()<<i <<"\t" <<mm.typeName()<<"\t::"<<QString(byteArray);
    }

    qDebug()<<"end----------------------custom class method";

    qDebug()<<"begin    QMetaObject::invokeMethod";
    QString invokeString;
    //调用类的成员函数
    QMetaObject::invokeMethod(obj, "text", Qt::DirectConnection, Q_RETURN_ARG(QString, invokeString));

    qDebug()<<invokeString<<endl;
    qDebug()<<"end            QMetaObject::invokeMethod"<<endl;

    // 再次设置text值，可以响应这个信号，可以参考4
    obj->setProperty("text", "luelueluelue");



    QString aa = QString("0123401234");

    qDebug() <<aa.indexOf('2', 0) <<aa.indexOf('2', -1) <<aa.lastIndexOf('2');


}

void MainWindow::on_pushButton_clicked()
{

//    QList<QVariant> params = m_DBCommOCXEF5.GetAllTagName().toList();
//    QVariant params = m_DBCommOCXEF5.GetAllTagName().toList();
//    qDebug() <<params;
//    QList<QVariant> values = m_DBCommOCXEF5.GetData(QVariant(params)).toList();

//    QListIterator<QVariant> itor(params);
//    while (itor.hasNext()) {
//        QString pa_name = QVariant(itor.next()).toString();
//        qDebug() <<pa_name <<m_DBCommOCXEF5.GetData(QVariant(pa_name + QString(".PV")));
//    }
}

void MainWindow::on_pushButton_2_clicked()
{
//    qDebug() <<"-- on_pushButton_2_clicked ..";

//    QString ss = "aa\r\nb  b\r\n";
//    qDebug() <<ss <<ss.length();

//    ss.replace(0x20, 0x0B);  // " "
//    ss.replace(0x0D, 0x07);  // "\r"
//    ss.replace(0x0A, 0x06);  // "\n"
//    qDebug() <<ss <<ss.length() <<ss.at(0).unicode();
//    qDebug() <<QChar(' ').unicode() <<QChar('\r').unicode() <<QChar('\n').unicode();
//    qDebug() <<ss.toLocal8Bit().constData();

    QJsonObject aa;
    aa.insert("a", "aaaa");
    aa.insert("b", "bbbb");

    DataPairStack dps;
    dps.push(QPair<DataIndex, QJsonValue>(0, aa));

    qDebug() <<QVariant(dps.top().second).toJsonValue();

    QJsonArray arr;
    arr.append("a");
    arr.append("b");
    arr.append("c");

    qDebug() <<arr.at(1).toVariant().toString();

    QString str[10];
    str[0] = arr.at(1).toVariant().toString();

    qDebug() <<str[0];

//    QString aa = "\\\\a\\\\b";
//    qDebug() <<aa;
//    QStringList i_valuelist = aa.split('\\', QString::KeepEmptyParts);


//    QList<QVariant> params = m_DBCommOCXEF5.GetAllTagName().toList();

//    QDateTime t_time_end    = QDateTime::currentDateTime();
//    QDateTime t_time_start  = t_time_end.addSecs((-1) * 60);

//    qDebug() <<"-- TIME.. \n" <<t_time_start <<endl <<t_time_end;

//    QVariant tt_value = m_DBCommOCXEF5.GetHisData(t_time_start, t_time_end, 100, QVariant(QString("c_value.PV")));
//    QString aa = QString("c_value.PV");
//    QVariant tt_value = m_DBCommOCXEF5.GetHisTrace(t_time_start, t_time_end, aa);
//    qDebug() <<tt_value;

//    QListIterator<QVariant> itor(params);
//    while (itor.hasNext()) {
//        QString pa_name = QVariant(itor.next()).toString();
//        qDebug() <<pa_name + QString(".PV");

//        QVariant tt_value = m_DBCommOCXEF5.GetHisData(t_time_start, t_time_end, 10, QVariant(pa_name + QString(".PV")));
//        qDebug() <<tt_value;

//    }

    qDebug() <<ui->timeEdit->styleSheet() <<ui->dateEdit->styleSheet();
}
