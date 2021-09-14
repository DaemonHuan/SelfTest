#include "batchrename.h"
#include "ui_batchrename.h"

#include <QFile>
#include <QDir>
#include <QFileDialog>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QCheckBox>

#include <QDebug>
#include <QList>

BatchReName::BatchReName(QWidget *parent) : QWidget(parent), ui(new Ui::BatchReName)
{
    ui->setupUi(this);
    this->setWindowTitle("Batch Rename ..");

    QObject::connect(ui->load, SIGNAL(clicked()), this, SLOT(doLoadFileList()));
    QObject::connect(ui->filename, SIGNAL(editingFinished()), this, SLOT(doReNameFormart()));
    QObject::connect(ui->start, SIGNAL(clicked()), this, SLOT(doFilesReName()));
    QObject::connect(ui->cb_remove, &QCheckBox::stateChanged, this, &BatchReName::doReNameRemoveCode);
}

BatchReName::~BatchReName() {    delete ui;     }

QList<QString> BatchReName::getFileList(const QString path)
{
    QList<QString> resList;
    resList.clear();
    this->resetTableView();

    QDir dir(path);
    foreach(QFileInfo mfi ,dir.entryInfoList())
    {
        if(mfi.isFile())
        {
            qDebug()<< "File :" << mfi.fileName() <<mfi.filePath();
            resList.append(mfi.fileName());
            ui->tableWidget->insertRow(ui->tableWidget->rowCount());
            qDebug() << ui->tableWidget->rowCount() <<mfi.fileName();
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 0, new QTableWidgetItem(mfi.fileName()));
        }else
        {
            if(mfi.fileName()=="." || mfi.fileName() == "..")continue;
//            qDebug() << "Entry Dir" << mfi.absoluteFilePath();
        }
    }
    return resList;
}

void BatchReName::resetTableView()
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setRowCount(0);
}

void BatchReName::doLoadFileList()
{
    QString str = QFileDialog::getExistingDirectory(this, tr("choose dictionary"), "./", QFileDialog::ShowDirsOnly);
    this->filepath = str;
    qDebug() << this->getFileList(str);
    ui->filepath->setText(str);
}

void BatchReName::doFilesReName()
{
    if (ui->cb_remove->isChecked()) {
        for (int count = 0; count < ui->tableWidget->rowCount(); ++count)
        {
            QString newname;
            newname.append(this->filepath);
            newname.append(QString("/")+ui->tableWidget->item(count,1)->text());

            QString oldname = this->filepath + QString("/") + ui->tableWidget->item(count, 0)->text();

            qDebug() <<oldname <<newname <<QFile::rename(oldname, newname);
        }

        return void();
    }

    for (int count = 0; count < ui->tableWidget->rowCount(); ++count)
    {
        QString newname;
        newname.append(this->filepath);
        newname.append(QString("\\")+ui->tableWidget->item(count,1)->text());
        newname.append(".mp3");

        QString oldname = this->filepath + QString("\\") + ui->tableWidget->item(count, 0)->text();

        qDebug() <<oldname <<newname <<QFile::rename(oldname, newname);
    }
}

void BatchReName::doReNameFormart(int flag)
{
    Q_UNUSED(flag)

    qDebug()<<ui->filename->text();
    QString name = ui->filename->text();
//    name.append(" ");

    QString num = "";
    int iflag = ui->si_flag->value(), fcount = 0;
    for (int count = 0; count < ui->tableWidget->rowCount(); ++count)
    {
        fcount = count + 1;

        if (ui->tableWidget->rowCount() <= 100) {
            num = num.asprintf("%02d", (iflag + fcount));
        }
        else {
            num = num.asprintf("%03d", (iflag + fcount));
        }

        qDebug() <<(name + num);
        ui->tableWidget->setItem(count, 1, new QTableWidgetItem(name + " " + num));
    }
}

void BatchReName::doReNameRemoveCode(int flag)
{
    for (int count = 0; count < ui->tableWidget->rowCount(); ++count) {
        QString i_fm = ui->tableWidget->item(count, 0)->text();
        QString i_fm_new = i_fm.replace(" (", " - ").replace(")", "");

        ui->tableWidget->setItem(count, 1, new QTableWidgetItem(i_fm_new));
    }
}

void BatchReName::on_si_flag_valueChanged(int arg1)
{
    return this->doReNameFormart(arg1);
}
