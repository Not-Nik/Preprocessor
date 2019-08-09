//
//  Syntax.h
//  Preprocessor
//
//  Created by Nikolas Wipper on 08.04.19.
//  Copyright © 2019 Nikolas Wipper. All rights reserved.
//

#include <stdio.h>

#ifndef Syntax_h
#define Syntax_h

#define if if(
#define else }else if 1!=0
#define elif else ) if

#define then ){
#define does {
#define try {

#define end } if errno ){ printf("In file %s, line %i: %s\n", __FILE__, __LINE__, strerror(errno)); }
#define fi }

#endif /* Syntax_h */
