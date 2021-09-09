#include "jmetaclass.h"

#include <QDebug>

// @@@@@@@@@@@@@@@@@@@@@
// @@@@@~~~~@@~~@@~~@@@@
// @@@@@@@~~@@~~@~~@@@@@
// @@@@@@@~~@@~~~~@@@@@@
// @@@~~@@~~@@~~@~~@@@@@
// @@@@~~~~@@@~~@@~~@@@@
// @@@@@@@@@@@@@@@@@@@@@  this is jk ..


JMetaClass::JMetaClass(QObject *parent) : QObject(parent)
{
    this->setObjectName("JMetaClass");
    m_text = QString("JMetaClass");
}

void JMetaClass::init()
{
    qDebug() <<"**" <<m_text;
}

QString JMetaClass::text()
{
    return m_text;
}

void JMetaClass::setText(const QString &str)
{
    m_text = str;
    qDebug() <<"** setText .." <<m_text;
}
