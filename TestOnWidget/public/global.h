//
//
// GLOBAL: definitions, functions, variants

#ifndef _JK_GLOBAL_DEFINITIONS_H
#define _JK_GLOBAL_DEFINITIONS_H

#include <QObject>
#include <QWidget>
#include <QString>
#include <QByteArray>
#include <QBitArray>

#include <QFont>
#include <QFile>

#include <QColor>
#include <QPixmap>
#include <QImage>
#include <QPaintEvent>
#include <QPainter>

#include <QDebug>

typedef bool BOOL;
typedef const unsigned short CMDC;

// commands
CMDC EF_APP_CLOSE  = 0x0000;
CMDC EF_APP_NORMAL = 0x0001;
CMDC EF_APP_MIN    = 0x0002;
CMDC EF_APP_MAX    = 0x0003;
CMDC EF_APP_INFO   = 0x0004;

CMDC EF_CMDC_NULL  = 0xFFFF;
CMDC EF_ERROR_UNKNOW  = 0xF000;
CMDC EF_ERROR         = 0xF001;

CMDC EF_TAB_HOME      = 0x1000;
CMDC EF_TAB_DEVICE    = 0x1001;
CMDC EF_TAB_DATA      = 0x1002;
CMDC EF_TAB_VARIANT   = 0x1003;
CMDC EF_TAB_WINDOWS   = 0x1004;
CMDC EF_TAB_USERGROUP = 0x1005;
CMDC EF_TAB_CONFIG    = 0x1006;
CMDC EF_TAB_DEPLOY    = 0x1007;

CMDC EF_ACTION_BUILD  = 0x2000;
CMDC EF_ACTION_RUN    = 0x2001;

#define G_OPTIONBAR_WIDTH 68
#define G_ACTIONBAR_HEIGHT 68

#define EFPP_VOID void

#endif // _JK_GLOBAL_DEFINITIONS_H  ////


#ifndef _JK_GLOBAL_VARIANTS_H
#define _JK_GLOBAL_VARIANTS_H

namespace globalvariants {
    const int version = 10;
    const long bigCount = 1024 * 1024;

    static QString background_darkcolor = "#232325";
    static QString background_lightcolor = "#EEEEEF";
};
#endif // _JK_GLOBAL_VARIANTS_H  ////

#ifndef _JK_GLOBAL_FUNCTIONS_H

#define EF_STATIC_FUCTIONS static

class GolbalFunctions {
public:
    EF_STATIC_FUCTIONS QString getVersion();

};

#define _JK_GLOBAL_FUNCTIONS_H

#endif // _JK_GLOBAL_FUNCTIONS_H  ////

