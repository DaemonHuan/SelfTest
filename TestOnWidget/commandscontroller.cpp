#include "commandscontroller.h"

#include <QMutexLocker>

#include <QDebug>

static QMutex s_mutex_locker;
CCommandsController * CCommandsController::pInstance = nullptr;

CCommandsController::CCommandsController(QObject *parent) :
    QObject(parent)
{}

CCommandsController::~CCommandsController()
{}

CCommandsController *CCommandsController::instance()
{
    QMutexLocker _mutexlocker(&s_mutex_locker);

    if (nullptr == pInstance)
        pInstance = new CCommandsController;

    _mutexlocker.unlock();
    return pInstance;
}

void CCommandsController::biuCommands(QObject *obj, CMDC code)
{
    qDebug() <<__FILE__ <<__FUNCTION__ <<obj <<code;

    if (code == EF_CMDC_NULL) return void(nullptr);

    if (obj) emit SCmdcInstance->slSendCommands(obj, code);
}

int CCommandsController::addFilterList(const QList<CMDC> &list)
{
    mFilterList.append(list);
    return mFilterList.size();
}
