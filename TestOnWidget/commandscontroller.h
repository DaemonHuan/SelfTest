#ifndef _JK_CCOMMANDSCONTROLLER_HH
#define _JK_CCOMMANDSCONTROLLER_HH

#include "public/global.h"

#define SCmdcInstance CCommandsController::instance()

class CCommandsController : public QObject
{
    Q_OBJECT
public:
    static CCommandsController* instance();
    static void biuCommands(QObject *obj, CMDC code = EF_CMDC_NULL);

    int addFilterList(const QList<CMDC> &list);

Q_SIGNALS:
    void slSendCommands(QObject *obj, CMDC code);

protected:
    explicit CCommandsController(QObject *parent = nullptr);
    virtual ~CCommandsController();

private:
    static CCommandsController* pInstance;

    QList<CMDC> mFilterList;

};

#endif // __JK_CCOMMANDSCONTROLLER_HH
