//
//  main.c
//  COMPILER
//
//  Created by Larson Carter on 8/29/18.
//  Copyright © 2018 Larson Carter. All rights reserved.
//

#include <stdio.h>

#include <string.h>

#define MAX_LIMIT 10

int main() {
    
    printf("What OS are you running?\n");
    
    printf("Example: WINDOWS, LINUX, MACOS\n");
    
    char os[10];
    
    scanf("%s",os);
    
    if (strcmp(os, "WINDOWS") == 0 || strcmp(os, "windows") == 0) {
        
        printf("Go to Documentation Repo on GitHub. \n"); // Change To Download For Windows
        
        //  This Will Be Continued
        
    } else if (strcmp(os, "LINUX") == 0 || strcmp(os, "linux") == 0) {
        
        printf("Go to https://goo.gl/zNY46D \n"); // Change To Download For Linux
        
        printf("Open LINUX.md and follow instructions \n");
        
    } else if (strcmp(os, "MACOS") == 0 || strcmp(os, "macos") == 0) {
        
        printf("Go to https://goo.gl/zNY46D \n"); // Change To Download For MacOS
        
        printf("Open MACOS.md and follow instructions \n");
        
    } else {
        
        printf("ERROR: 1 \n");
        
    }
    
    return 0;
    
}
