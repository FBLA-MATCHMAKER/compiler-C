//
//  main.c
//  COMPILER
//
//  Created by Larson Carter on 8/29/18.
//  Copyright © 2018 Larson Carter. All rights reserved.
//

#include <stdio.h>

#define MAX_LIMIT 10

int main() {
    
    printf("What OS are you running?\n");
    
    printf("Example: WINDOWS, LINUX, MACOS\n");
    
    char os[10];
    
    scanf("%s",os);
    
    if (strcmp(os, "WINDOWS") == 0) {
        
        printf("SUCCESS-W \n"); // Change To Download For Windows
        
    } else if (strcmp(os, "LINUX") == 0) {
        
        printf("SUCCESS-L \n"); // Change To Download For Linux
        
    } else if (strcmp(os, "MACOS") == 0) {
        
        printf("SUCCESS-M \n"); // Change To Download For MacOS
        
    } else {
        
        printf("ERROR: 1 \n");
        
    }
    
    return 0;
    
}
