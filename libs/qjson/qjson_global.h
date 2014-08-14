#ifndef QJSON_GLOBAL_H
#define QJSON_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef QJSON_LIB
# define QJSON_EXPORT Q_DECL_EXPORT
#else
# define QJSON_EXPORT Q_DECL_IMPORT
#endif

#endif // QJSON_GLOBAL_H
