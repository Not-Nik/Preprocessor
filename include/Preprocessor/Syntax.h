// Preprocessor (c) Nikolas Wipper 2020

#ifndef PREPROCESSOR_SYNTAX_H
#define PREPROCESSOR_SYNTAX_H

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "Macros.h"

#ifndef IWANTBRACKETS
#define if if(
#define else }else if 1!=0
#define elif else ) if

#define for for(
#define while while(

#define then ){
#define do ){
#define does {
#define try {

#define fi }
#define end } checkError()
#define forever for ;;
#else
#define elif else if
#define forever for (;;)
#endif

#ifdef __cplusplus
#define func auto
#endif

#endif /*PREPROCESSOR_SYNTAX_H*/
