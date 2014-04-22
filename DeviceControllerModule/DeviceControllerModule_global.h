#ifndef DEVICECONTROLLERMODULE_GLOBAL_H
#define DEVICECONTROLLERMODULE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DATAPARSE_LIBRARY)
#  define DEVICECONTROLLERMODULESHARED_EXPORT Q_DECL_EXPORT
#else
#  define DEVICECONTROLLERMODULESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // DEVICECONTROLLERMODULE_GLOBAL_H