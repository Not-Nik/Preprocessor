//
//  main.c
//  Tests
//
//  Created by Nikolas Wipper on 08.04.19.
//  Copyright © 2019 Nikolas Wipper. All rights reserved.
//

#import <Preprocessor/Preprocessor.h>
#import <stdio.h>
#import <string.h>
#import <errno.h>

int32 _startup does
    string test = "KaK";
    string lol = "YXX";
    if strcmp(test, "KaK") is 0 and strcmp(test, "AAA") then
        printf("Heureka\n");
    elif strcmp(lol, "YXX") then
        printf("Shit\n");
    else then
        printf("F*ck no!\n");
    end

    try
        fopen("unexist.txt", "rb");
    end
    return 0;
fi
