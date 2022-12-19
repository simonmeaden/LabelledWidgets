#pragma once

#include <QtCore/qglobal.h>

#if defined(LABELLED_LIBRARY)
  #define LABELLED_SHARED_EXPORT Q_DECL_EXPORT
#else
  #define LABELLED_SHARED_EXPORT Q_DECL_IMPORT
#endif

