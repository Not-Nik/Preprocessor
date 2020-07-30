// Preprocessor (c) Nikolas Wipper 2020

#ifndef PREPROCESSOR_PREPROCESSOR_H
#define PREPROCESSOR_PREPROCESSOR_H

#include "Signs.h"
#include "Syntax.h"
#include "Types.h"

#ifdef IWANTBRACKETS
#warning "Using brackets removes overwriting of try"
#endif

#ifdef __cplusplus
#ifndef NDEBUG
#define DEBUG
#endif
#endif

#endif /*PREPROCESSOR_PREPROCESSOR_H*/
