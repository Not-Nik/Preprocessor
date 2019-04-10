//
//  main.c
//  Tests
//
//  Created by Nik Wipper on 08.04.19.
//  Copyright © 2019 Nikolas Wipper. All rights reserved.
//

#import <Preprocessor/Preprocessor.h>
#import <stdio.h>
#import <string.h>

func __startup does
    var test = "KKK";
    if (strcmp(test, "KKK")) then
        printf("Heureka\n");
    end else then
        printf("Shit\n");
    end
    return 0;
end
