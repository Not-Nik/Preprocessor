// Preprocessor (c) Nikolas Wipper 2020

#ifndef PREPROCESSOR_SIGNS_H
#define PREPROCESSOR_SIGNS_H

#define is ==
#define equals ==

#define isnt !=

#ifndef __cplusplus
    #define not !
    #define and &&
    #define or ||
#endif

#define larger >
#define higher >
#define bigger >
#define greater >
#define longer >

#define smaller <
#define lesser <
#define lower <
#define shorter <

#endif /*PREPROCESSOR_SIGNS_H*/
