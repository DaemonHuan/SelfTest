/****************************************************************************
**
** Namespace DbCommOcxLibEF5 generated by dumpcpp v5.12.10 using
** dumpcpp {69E81D18-C1AC-448D-9EF1-60C32D40CF07}
** from the type library D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.ocx
**
****************************************************************************/

#ifndef QAX_DUMPCPP_DBCOMMOCXLIBEF5_H
#define QAX_DUMPCPP_DBCOMMOCXLIBEF5_H

// Define this symbol to __declspec(dllexport) or __declspec(dllimport)
#ifndef DBCOMMOCXLIBEF5_EXPORT
#define DBCOMMOCXLIBEF5_EXPORT
#endif

#include <qaxobject.h>
#include <qaxwidget.h>
#include <qdatetime.h>
#include <qpixmap.h>

struct IDispatch;


// Referenced namespace

namespace DbCommOcxLibEF5 {

    enum __MIDL___MIDL_itf_DbCommOcx_0000_0000_0001 {
        STATUS_OK               = 0,
        STATUS_NOCONNECT        = 1,
        STATUS_INIT             = 2,
        STATUS_DISCONNECT       = 3,
        STATUS_RECONNECT        = 4,
        STATUS_NOLIC            = 5,
        STATUS_INITFALSE        = 6
    };

// forward declarations
    enum __MIDL___MIDL_itf_DbCommOcx_0000_0000_0001;
    enum __MIDL___MIDL_itf_DbCommOcx_0000_0000_0001;

class DBCOMMOCXLIBEF5_EXPORT _DDbCommOcxEF5 : public QAxObject
{
public:
    _DDbCommOcxEF5(IDispatch *subobject = 0, QAxObject *parent = 0)
    : QAxObject((IUnknown*)subobject, parent)
    {
        internalRelease();
    }

    /*
    Property TimeOut

    For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int TimeOut() const; //Returns the value of TimeOut
    inline void SetTimeOut(int value); //Sets the value of the TimeOut property

    /*
    Property UpDateTime

    For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int UpDateTime() const; //Returns the value of UpDateTime
    inline void SetUpDateTime(int value); //Sets the value of the UpDateTime property

    /*
    Method AboutBox

    For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline void AboutBox();

    /*
    Method AckAlarm

    ȷ�ϱ���
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int AckAlarm(QString& bstrAckUser, const QVariant& vaAlmNo);

    /*
    Method AddAlarmComment

    ���ӱ�������
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int AddAlarmComment(QString& bstrUser, const QVariant& vaAlmNo, const QVariant& vaAlmComment);

    /*
    Method CloseConnect

    �ر�DB����
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline void CloseConnect();

    /*
    Method DelChangeTagParsByName

    ɾ��ָ�����Ƶ�֪ͨ��
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int DelChangeTagParsByName(const QVariant& vaTagName);

    /*
    Method DelChangeTagParsByRegNo

    ɾ��ָ����ŵ�֪ͨ��
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int DelChangeTagParsByRegNo(const QVariant& vaRegNo);

    /*
    Method GetAlarmCount

    ��ȡ��������
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int GetAlarmCount();

    /*
    Method GetAlarmData

    ��ȡ��������
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetAlarmData();

    /*
    Method GetAllTagCount

    ��ȡDB�����
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int GetAllTagCount();

    /*
    Method GetAllTagName

    ��ȡ���е���
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetAllTagName();

    /*
    Method GetData

    ��ȡ��ʵʱֵ
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetData(const QVariant& vaTagName);

    /*
    Method GetDataEx

    ��ȡ��ʵʱֵ��չ
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetDataEx(const QVariant& vaTagName);

    /*
    Method GetHisData

    ��ȡ����ʷ����
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetHisData(const QDateTime& StartTime, const QDateTime& EndTime, int lDataCount, const QVariant& vaTagName);

    /*
    Method GetHisDataEx

    ��ȡ����ʷ������չ
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetHisDataEx(const QDateTime& StartTime, const QDateTime& EndTime, int lDataCount, const QVariant& vaTagName);

    /*
    Method GetHisTrace

    ��ʷ׷��
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetHisTrace(const QDateTime& StartTime, const QDateTime& EndTime, QString& batrpTagName);

    /*
    Method GetMarkupLayerStr

    ��ȡ�������Ϣxml
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int GetMarkupLayerStr(QString& bstrpMarkerLayerStr);

    /*
    Method GetNodeAllTagName

    ��ȡָ���������е���
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetNodeAllTagName(int lAreaNo);

    /*
    Method GetNodeInfo

    ��ȡ������Ϣ
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetNodeInfo(int lAreaNo);

    /*
    Method GetRegData

    ��ȡ֪ͨ������
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetRegData(const QVariant& vaTagName);

    /*
    Method GetStatus

    ��ȡDB״̬
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int GetStatus();

    /*
    Method GetTagParCount

    ��ȡ���������
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int GetTagParCount(QString& bstrpTagName);

    /*
    Method GetTagPars

    ��ȡ�������Ϣ
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetTagPars(QString& bstrpTagName);

    /*
    Method GetTagType

    ��ȡ������
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int GetTagType(QString& bstrpTagName);

    /*
    Method GetTagTypePars

    ��ȡ�����Ͳ���
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetTagTypePars(int lTagType);

    /*
    Method InsertHisData

    ������ʷ����
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int InsertHisData(QString& bstrpTagName, const QVariant& vaDataTime, const QVariant& vaDataTimeSh, const QVariant& vaDataValue);

    /*
    Method IsConnected

    DB�Ƿ�������״̬
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int IsConnected();

    /*
    Method IsWorking

    DB�Ƿ���������
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int IsWorking();

    /*
    Method OpenLocalConnect

    ���ӱ���DB
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int OpenLocalConnect();

    /*
    Method OpenLocalConnect

    ���ӱ���DB
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int OpenLocalConnect(int bAsync);

    /*
    Method OpenRemoteConnect

    ����Զ��DB
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int OpenRemoteConnect(QString& bstrpRemoteAddr, int lRemotePort, QString& bstrpLocalAddr, int lLocalPort);

    /*
    Method OpenRemoteConnect

    ����Զ��DB
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int OpenRemoteConnect(QString& bstrpRemoteAddr, int lRemotePort, QString& bstrpLocalAddr, int lLocalPort, int bAsync);

    /*
    Method RemoveChangeTagPars

    ɾ������֪ͨ��
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int RemoveChangeTagPars();

    /*
    Method SetChangeTagPars

    ����֪ͨ��
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant SetChangeTagPars(const QVariant& vaTagName);

    /*
    Method SetData

    ���õ������ֵ
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int SetData(const QVariant& vaTagName, const QVariant& vaTagData);

    /*
    Method SubscribeAlmLogInfo

    ���ı���
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int SubscribeAlmLogInfo(int bSubscribe);

// meta object functions
    static const QMetaObject staticMetaObject;
    virtual const QMetaObject *metaObject() const { return &staticMetaObject; }
    virtual void *qt_metacast(const char *);
};

// skipping event interface _DDbCommOcxEventsEF5

// Actual coclasses
class DBCOMMOCXLIBEF5_EXPORT DbCommOcxEF5 : public QAxWidget
{
public:
    DbCommOcxEF5(QWidget *parent = 0, Qt::WindowFlags f = 0)
    : QAxWidget(parent, f)
    {
        setControl(QStringLiteral("{69e81d18-c1ac-448d-9ef1-60c32d40cf07}"));
    }

    /*
    Property TimeOut

    For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int TimeOut() const; //Returns the value of TimeOut
    inline void SetTimeOut(int value); //Sets the value of the TimeOut property

    /*
    Property UpDateTime

    For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int UpDateTime() const; //Returns the value of UpDateTime
    inline void SetUpDateTime(int value); //Sets the value of the UpDateTime property

    /*
    Method AboutBox

    For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline void AboutBox();

    /*
    Method AckAlarm

    ??????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int AckAlarm(QString& bstrAckUser, const QVariant& vaAlmNo);

    /*
    Method AddAlarmComment

    ???????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int AddAlarmComment(QString& bstrUser, const QVariant& vaAlmNo, const QVariant& vaAlmComment);

    /*
    Method CloseConnect

    ???DB????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline void CloseConnect();

    /*
    Method DelChangeTagParsByName

    ???????????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int DelChangeTagParsByName(const QVariant& vaTagName);

    /*
    Method DelChangeTagParsByRegNo

    ???????????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int DelChangeTagParsByRegNo(const QVariant& vaRegNo);

    /*
    Method GetAlarmCount

    ???????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int GetAlarmCount();

    /*
    Method GetAlarmData

    ???????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetAlarmData();

    /*
    Method GetAllTagCount

    ???DB??????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int GetAllTagCount();

    /*
    Method GetAllTagName

    ??????��???
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetAllTagName();

    /*
    Method GetData

    ????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetData(const QVariant& vaTagName);

    /*
    Method GetDataEx

    ???????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetDataEx(const QVariant& vaTagName);

    /*
    Method GetHisData

    ????????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetHisData(const QDateTime& StartTime, const QDateTime& EndTime, int lDataCount, const QVariant& vaTagName);

    /*
    Method GetHisDataEx

    ???????????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetHisDataEx(const QDateTime& StartTime, const QDateTime& EndTime, int lDataCount, const QVariant& vaTagName);

    /*
    Method GetHisTrace

    ??????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetHisTrace(const QDateTime& StartTime, const QDateTime& EndTime, QString& batrpTagName);

    /*
    Method GetMarkupLayerStr

    ????????????xml
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int GetMarkupLayerStr(QString& bstrpMarkerLayerStr);

    /*
    Method GetNodeAllTagName

    ?????????????��???
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetNodeAllTagName(int lAreaNo);

    /*
    Method GetNodeInfo

    ??????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetNodeInfo(int lAreaNo);

    /*
    Method GetRegData

    ???????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetRegData(const QVariant& vaTagName);

    /*
    Method GetStatus

    ???DB??
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int GetStatus();

    /*
    Method GetTagParCount

    ?????????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int GetTagParCount(QString& bstrpTagName);

    /*
    Method GetTagPars

    ????????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetTagPars(QString& bstrpTagName);

    /*
    Method GetTagType

    ?????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int GetTagType(QString& bstrpTagName);

    /*
    Method GetTagTypePars

    ????????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant GetTagTypePars(int lTagType);

    /*
    Method InsertHisData

    ???????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int InsertHisData(QString& bstrpTagName, const QVariant& vaDataTime, const QVariant& vaDataTimeSh, const QVariant& vaDataValue);

    /*
    Method IsConnected

    DB?????????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int IsConnected();

    /*
    Method IsWorking

    DB???????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int IsWorking();

    /*
    Method OpenLocalConnect

    ???????DB
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int OpenLocalConnect();

    /*
    Method OpenLocalConnect

    ???????DB
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int OpenLocalConnect(int bAsync);

    /*
    Method OpenRemoteConnect

    ???????DB
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int OpenRemoteConnect(QString& bstrpRemoteAddr, int lRemotePort, QString& bstrpLocalAddr, int lLocalPort);

    /*
    Method OpenRemoteConnect

    ???????DB
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int OpenRemoteConnect(QString& bstrpRemoteAddr, int lRemotePort, QString& bstrpLocalAddr, int lLocalPort, int bAsync);

    /*
    Method RemoveChangeTagPars

    ???????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int RemoveChangeTagPars();

    /*
    Method SetChangeTagPars

    ????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline QVariant SetChangeTagPars(const QVariant& vaTagName);

    /*
    Method SetData

    ????????????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int SetData(const QVariant& vaTagName, const QVariant& vaTagData);

    /*
    Method SubscribeAlmLogInfo

    ???????
For more information, see help context 0 in D:\Program Files (x86)\eForceCon V5.0\DbCommOcx.hlp.
    */
    inline int SubscribeAlmLogInfo(int bSubscribe);

// meta object functions
    static const QMetaObject staticMetaObject;
    virtual const QMetaObject *metaObject() const { return &staticMetaObject; }
    virtual void *qt_metacast(const char *);
};

// member function implementation
#ifndef QAX_DUMPCPP_DBCOMMOCXLIBEF5_NOINLINES
inline int _DDbCommOcxEF5::TimeOut() const
{
    QVariant qax_result = property("TimeOut");
    Q_ASSERT(qax_result.isValid());
    return *(int*)qax_result.constData();
}
inline void _DDbCommOcxEF5::SetTimeOut(int value){ setProperty("TimeOut", QVariant(value)); }

inline int _DDbCommOcxEF5::UpDateTime() const
{
    QVariant qax_result = property("UpDateTime");
    Q_ASSERT(qax_result.isValid());
    return *(int*)qax_result.constData();
}
inline void _DDbCommOcxEF5::SetUpDateTime(int value){ setProperty("UpDateTime", QVariant(value)); }

inline void _DDbCommOcxEF5::AboutBox()
{
    void *_a[] = {0};
    qt_metacall(QMetaObject::InvokeMetaMethod, 8, _a);
}

inline int _DDbCommOcxEF5::AckAlarm(QString& bstrAckUser, const QVariant& vaAlmNo)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bstrAckUser, (void*)&vaAlmNo};
    qt_metacall(QMetaObject::InvokeMetaMethod, 9, _a);
    return qax_result;
}

inline int _DDbCommOcxEF5::AddAlarmComment(QString& bstrUser, const QVariant& vaAlmNo, const QVariant& vaAlmComment)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bstrUser, (void*)&vaAlmNo, (void*)&vaAlmComment};
    qt_metacall(QMetaObject::InvokeMetaMethod, 10, _a);
    return qax_result;
}

inline void _DDbCommOcxEF5::CloseConnect()
{
    void *_a[] = {0};
    qt_metacall(QMetaObject::InvokeMetaMethod, 11, _a);
}

inline int _DDbCommOcxEF5::DelChangeTagParsByName(const QVariant& vaTagName)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&vaTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 12, _a);
    return qax_result;
}

inline int _DDbCommOcxEF5::DelChangeTagParsByRegNo(const QVariant& vaRegNo)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&vaRegNo};
    qt_metacall(QMetaObject::InvokeMetaMethod, 13, _a);
    return qax_result;
}

inline int _DDbCommOcxEF5::GetAlarmCount()
{
    int qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 14, _a);
    return qax_result;
}

inline QVariant _DDbCommOcxEF5::GetAlarmData()
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 15, _a);
    return qax_result;
}

inline int _DDbCommOcxEF5::GetAllTagCount()
{
    int qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 16, _a);
    return qax_result;
}

inline QVariant _DDbCommOcxEF5::GetAllTagName()
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 17, _a);
    return qax_result;
}

inline QVariant _DDbCommOcxEF5::GetData(const QVariant& vaTagName)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&vaTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 18, _a);
    return qax_result;
}

inline QVariant _DDbCommOcxEF5::GetDataEx(const QVariant& vaTagName)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&vaTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 19, _a);
    return qax_result;
}

inline QVariant _DDbCommOcxEF5::GetHisData(const QDateTime& StartTime, const QDateTime& EndTime, int lDataCount, const QVariant& vaTagName)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&StartTime, (void*)&EndTime, (void*)&lDataCount, (void*)&vaTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 20, _a);
    return qax_result;
}

inline QVariant _DDbCommOcxEF5::GetHisDataEx(const QDateTime& StartTime, const QDateTime& EndTime, int lDataCount, const QVariant& vaTagName)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&StartTime, (void*)&EndTime, (void*)&lDataCount, (void*)&vaTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 21, _a);
    return qax_result;
}

inline QVariant _DDbCommOcxEF5::GetHisTrace(const QDateTime& StartTime, const QDateTime& EndTime, QString& batrpTagName)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&StartTime, (void*)&EndTime, (void*)&batrpTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 22, _a);
    return qax_result;
}

inline int _DDbCommOcxEF5::GetMarkupLayerStr(QString& bstrpMarkerLayerStr)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bstrpMarkerLayerStr};
    qt_metacall(QMetaObject::InvokeMetaMethod, 23, _a);
    return qax_result;
}

inline QVariant _DDbCommOcxEF5::GetNodeAllTagName(int lAreaNo)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&lAreaNo};
    qt_metacall(QMetaObject::InvokeMetaMethod, 24, _a);
    return qax_result;
}

inline QVariant _DDbCommOcxEF5::GetNodeInfo(int lAreaNo)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&lAreaNo};
    qt_metacall(QMetaObject::InvokeMetaMethod, 25, _a);
    return qax_result;
}

inline QVariant _DDbCommOcxEF5::GetRegData(const QVariant& vaTagName)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&vaTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 26, _a);
    return qax_result;
}

inline int _DDbCommOcxEF5::GetStatus()
{
    int qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 27, _a);
    return qax_result;
}

inline int _DDbCommOcxEF5::GetTagParCount(QString& bstrpTagName)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bstrpTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 28, _a);
    return qax_result;
}

inline QVariant _DDbCommOcxEF5::GetTagPars(QString& bstrpTagName)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bstrpTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 29, _a);
    return qax_result;
}

inline int _DDbCommOcxEF5::GetTagType(QString& bstrpTagName)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bstrpTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 30, _a);
    return qax_result;
}

inline QVariant _DDbCommOcxEF5::GetTagTypePars(int lTagType)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&lTagType};
    qt_metacall(QMetaObject::InvokeMetaMethod, 31, _a);
    return qax_result;
}

inline int _DDbCommOcxEF5::InsertHisData(QString& bstrpTagName, const QVariant& vaDataTime, const QVariant& vaDataTimeSh, const QVariant& vaDataValue)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bstrpTagName, (void*)&vaDataTime, (void*)&vaDataTimeSh, (void*)&vaDataValue};
    qt_metacall(QMetaObject::InvokeMetaMethod, 32, _a);
    return qax_result;
}

inline int _DDbCommOcxEF5::IsConnected()
{
    int qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 33, _a);
    return qax_result;
}

inline int _DDbCommOcxEF5::IsWorking()
{
    int qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 34, _a);
    return qax_result;
}

inline int _DDbCommOcxEF5::OpenLocalConnect()
{
    int qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 35, _a);
    return qax_result;
}

inline int _DDbCommOcxEF5::OpenLocalConnect(int bAsync)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bAsync};
    qt_metacall(QMetaObject::InvokeMetaMethod, 36, _a);
    return qax_result;
}

inline int _DDbCommOcxEF5::OpenRemoteConnect(QString& bstrpRemoteAddr, int lRemotePort, QString& bstrpLocalAddr, int lLocalPort)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bstrpRemoteAddr, (void*)&lRemotePort, (void*)&bstrpLocalAddr, (void*)&lLocalPort};
    qt_metacall(QMetaObject::InvokeMetaMethod, 37, _a);
    return qax_result;
}

inline int _DDbCommOcxEF5::OpenRemoteConnect(QString& bstrpRemoteAddr, int lRemotePort, QString& bstrpLocalAddr, int lLocalPort, int bAsync)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bstrpRemoteAddr, (void*)&lRemotePort, (void*)&bstrpLocalAddr, (void*)&lLocalPort, (void*)&bAsync};
    qt_metacall(QMetaObject::InvokeMetaMethod, 38, _a);
    return qax_result;
}

inline int _DDbCommOcxEF5::RemoveChangeTagPars()
{
    int qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 39, _a);
    return qax_result;
}

inline QVariant _DDbCommOcxEF5::SetChangeTagPars(const QVariant& vaTagName)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&vaTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 40, _a);
    return qax_result;
}

inline int _DDbCommOcxEF5::SetData(const QVariant& vaTagName, const QVariant& vaTagData)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&vaTagName, (void*)&vaTagData};
    qt_metacall(QMetaObject::InvokeMetaMethod, 41, _a);
    return qax_result;
}

inline int _DDbCommOcxEF5::SubscribeAlmLogInfo(int bSubscribe)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bSubscribe};
    qt_metacall(QMetaObject::InvokeMetaMethod, 44, _a);
    return qax_result;
}


inline int DbCommOcxEF5::TimeOut() const
{
    QVariant qax_result = property("TimeOut");
    Q_ASSERT(qax_result.isValid());
    return *(int*)qax_result.constData();
}
inline void DbCommOcxEF5::SetTimeOut(int value){ setProperty("TimeOut", QVariant(value)); }

inline int DbCommOcxEF5::UpDateTime() const
{
    QVariant qax_result = property("UpDateTime");
    Q_ASSERT(qax_result.isValid());
    return *(int*)qax_result.constData();
}
inline void DbCommOcxEF5::SetUpDateTime(int value){ setProperty("UpDateTime", QVariant(value)); }

inline void DbCommOcxEF5::AboutBox()
{
    void *_a[] = {0};
    qt_metacall(QMetaObject::InvokeMetaMethod, 39, _a);
}

inline int DbCommOcxEF5::AckAlarm(QString& bstrAckUser, const QVariant& vaAlmNo)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bstrAckUser, (void*)&vaAlmNo};
    qt_metacall(QMetaObject::InvokeMetaMethod, 40, _a);
    return qax_result;
}

inline int DbCommOcxEF5::AddAlarmComment(QString& bstrUser, const QVariant& vaAlmNo, const QVariant& vaAlmComment)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bstrUser, (void*)&vaAlmNo, (void*)&vaAlmComment};
    qt_metacall(QMetaObject::InvokeMetaMethod, 41, _a);
    return qax_result;
}

inline void DbCommOcxEF5::CloseConnect()
{
    void *_a[] = {0};
    qt_metacall(QMetaObject::InvokeMetaMethod, 42, _a);
}

inline int DbCommOcxEF5::DelChangeTagParsByName(const QVariant& vaTagName)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&vaTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 43, _a);
    return qax_result;
}

inline int DbCommOcxEF5::DelChangeTagParsByRegNo(const QVariant& vaRegNo)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&vaRegNo};
    qt_metacall(QMetaObject::InvokeMetaMethod, 44, _a);
    return qax_result;
}

inline int DbCommOcxEF5::GetAlarmCount()
{
    int qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 45, _a);
    return qax_result;
}

inline QVariant DbCommOcxEF5::GetAlarmData()
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 46, _a);
    return qax_result;
}

inline int DbCommOcxEF5::GetAllTagCount()
{
    int qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 47, _a);
    return qax_result;
}

inline QVariant DbCommOcxEF5::GetAllTagName()
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 48, _a);
    return qax_result;
}

inline QVariant DbCommOcxEF5::GetData(const QVariant& vaTagName)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&vaTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 49, _a);
    return qax_result;
}

inline QVariant DbCommOcxEF5::GetDataEx(const QVariant& vaTagName)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&vaTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 50, _a);
    return qax_result;
}

inline QVariant DbCommOcxEF5::GetHisData(const QDateTime& StartTime, const QDateTime& EndTime, int lDataCount, const QVariant& vaTagName)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&StartTime, (void*)&EndTime, (void*)&lDataCount, (void*)&vaTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 51, _a);
    return qax_result;
}

inline QVariant DbCommOcxEF5::GetHisDataEx(const QDateTime& StartTime, const QDateTime& EndTime, int lDataCount, const QVariant& vaTagName)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&StartTime, (void*)&EndTime, (void*)&lDataCount, (void*)&vaTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 52, _a);
    return qax_result;
}

inline QVariant DbCommOcxEF5::GetHisTrace(const QDateTime& StartTime, const QDateTime& EndTime, QString& batrpTagName)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&StartTime, (void*)&EndTime, (void*)&batrpTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 53, _a);
    return qax_result;
}

inline int DbCommOcxEF5::GetMarkupLayerStr(QString& bstrpMarkerLayerStr)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bstrpMarkerLayerStr};
    qt_metacall(QMetaObject::InvokeMetaMethod, 54, _a);
    return qax_result;
}

inline QVariant DbCommOcxEF5::GetNodeAllTagName(int lAreaNo)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&lAreaNo};
    qt_metacall(QMetaObject::InvokeMetaMethod, 55, _a);
    return qax_result;
}

inline QVariant DbCommOcxEF5::GetNodeInfo(int lAreaNo)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&lAreaNo};
    qt_metacall(QMetaObject::InvokeMetaMethod, 56, _a);
    return qax_result;
}

inline QVariant DbCommOcxEF5::GetRegData(const QVariant& vaTagName)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&vaTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 57, _a);
    return qax_result;
}

inline int DbCommOcxEF5::GetStatus()
{
    int qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 58, _a);
    return qax_result;
}

inline int DbCommOcxEF5::GetTagParCount(QString& bstrpTagName)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bstrpTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 59, _a);
    return qax_result;
}

inline QVariant DbCommOcxEF5::GetTagPars(QString& bstrpTagName)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bstrpTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 60, _a);
    return qax_result;
}

inline int DbCommOcxEF5::GetTagType(QString& bstrpTagName)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bstrpTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 61, _a);
    return qax_result;
}

inline QVariant DbCommOcxEF5::GetTagTypePars(int lTagType)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&lTagType};
    qt_metacall(QMetaObject::InvokeMetaMethod, 62, _a);
    return qax_result;
}

inline int DbCommOcxEF5::InsertHisData(QString& bstrpTagName, const QVariant& vaDataTime, const QVariant& vaDataTimeSh, const QVariant& vaDataValue)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bstrpTagName, (void*)&vaDataTime, (void*)&vaDataTimeSh, (void*)&vaDataValue};
    qt_metacall(QMetaObject::InvokeMetaMethod, 63, _a);
    return qax_result;
}

inline int DbCommOcxEF5::IsConnected()
{
    int qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 64, _a);
    return qax_result;
}

inline int DbCommOcxEF5::IsWorking()
{
    int qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 65, _a);
    return qax_result;
}

inline int DbCommOcxEF5::OpenLocalConnect()
{
    int qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 66, _a);
    return qax_result;
}

inline int DbCommOcxEF5::OpenLocalConnect(int bAsync)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bAsync};
    qt_metacall(QMetaObject::InvokeMetaMethod, 67, _a);
    return qax_result;
}

inline int DbCommOcxEF5::OpenRemoteConnect(QString& bstrpRemoteAddr, int lRemotePort, QString& bstrpLocalAddr, int lLocalPort)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bstrpRemoteAddr, (void*)&lRemotePort, (void*)&bstrpLocalAddr, (void*)&lLocalPort};
    qt_metacall(QMetaObject::InvokeMetaMethod, 68, _a);
    return qax_result;
}

inline int DbCommOcxEF5::OpenRemoteConnect(QString& bstrpRemoteAddr, int lRemotePort, QString& bstrpLocalAddr, int lLocalPort, int bAsync)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bstrpRemoteAddr, (void*)&lRemotePort, (void*)&bstrpLocalAddr, (void*)&lLocalPort, (void*)&bAsync};
    qt_metacall(QMetaObject::InvokeMetaMethod, 69, _a);
    return qax_result;
}

inline int DbCommOcxEF5::RemoveChangeTagPars()
{
    int qax_result;
    void *_a[] = {(void*)&qax_result};
    qt_metacall(QMetaObject::InvokeMetaMethod, 70, _a);
    return qax_result;
}

inline QVariant DbCommOcxEF5::SetChangeTagPars(const QVariant& vaTagName)
{
    QVariant qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&vaTagName};
    qt_metacall(QMetaObject::InvokeMetaMethod, 71, _a);
    return qax_result;
}

inline int DbCommOcxEF5::SetData(const QVariant& vaTagName, const QVariant& vaTagData)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&vaTagName, (void*)&vaTagData};
    qt_metacall(QMetaObject::InvokeMetaMethod, 72, _a);
    return qax_result;
}

inline int DbCommOcxEF5::SubscribeAlmLogInfo(int bSubscribe)
{
    int qax_result;
    void *_a[] = {(void*)&qax_result, (void*)&bSubscribe};
    qt_metacall(QMetaObject::InvokeMetaMethod, 75, _a);
    return qax_result;
}



#endif

}

QT_BEGIN_NAMESPACE

namespace QtMetaTypePrivate {
template<>
struct QMetaTypeFunctionHelper<DbCommOcxLibEF5::_DDbCommOcxEF5, /* Accepted */ true> {
    static void Destruct(void *t)
    {
        Q_UNUSED(t)
        static_cast<DbCommOcxLibEF5::_DDbCommOcxEF5*>(t)->DbCommOcxLibEF5::_DDbCommOcxEF5::~_DDbCommOcxEF5();
    }
    static void *Construct(void *where, const void *t)
    {
        Q_ASSERT(!t);
        Q_UNUSED(t)
        return new (where) DbCommOcxLibEF5::_DDbCommOcxEF5;
    }
#ifndef QT_NO_DATASTREAM
    static void Save(QDataStream &stream, const void *t) { stream << *static_cast<const DbCommOcxLibEF5::_DDbCommOcxEF5*>(t); }
    static void Load(QDataStream &stream, void *t) { stream >> *static_cast<DbCommOcxLibEF5::_DDbCommOcxEF5*>(t); }
#endif // QT_NO_DATASTREAM
};

template<>
struct QMetaTypeFunctionHelper<DbCommOcxLibEF5::DbCommOcxEF5, /* Accepted */ true> {
    static void Destruct(void *t)
    {
        Q_UNUSED(t)
        static_cast<DbCommOcxLibEF5::DbCommOcxEF5*>(t)->DbCommOcxLibEF5::DbCommOcxEF5::~DbCommOcxEF5();
    }
    static void *Construct(void *where, const void *t)
    {
        Q_ASSERT(!t);
        Q_UNUSED(t)
        return new (where) DbCommOcxLibEF5::DbCommOcxEF5;
    }
#ifndef QT_NO_DATASTREAM
    static void Save(QDataStream &stream, const void *t) { stream << *static_cast<const DbCommOcxLibEF5::DbCommOcxEF5*>(t); }
    static void Load(QDataStream &stream, void *t) { stream >> *static_cast<DbCommOcxLibEF5::DbCommOcxEF5*>(t); }
#endif // QT_NO_DATASTREAM
};

} // namespace QtMetaTypePrivate
QT_END_NAMESPACE

#endif
