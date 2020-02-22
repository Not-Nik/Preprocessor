// Preprocessor (c) Nikolas Wipper 2020

#ifndef PREPROCESSOR_MACROS_H
#define PREPROCESSOR_MACROS_H

#include <string.h>

#ifdef _WIN32
#define PATH_DELIMITER '\\'
#else
#define PATH_DELIMITER '/'
#endif

#define __FILENAME__ (strrchr(__FILE__, PATH_DELIMITER) ? strrchr(__FILE__, PATH_DELIMITER) + 1 : __FILE__)
#define checkError() if errno then printf("In file %s:%i: %s\n", __FILENAME__, __LINE__, strerror(errno)); exit(errno); fi

#endif /*PREPROCESSOR_MACROS_H*/
