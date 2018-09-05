//
//  main.c
//  COMPILER
//
//  Created by Larson Carter on 8/29/18.
//  Copyright © 2018 Larson Carter. All rights reserved.
//

/*
#include <stdio.h>

#define MAX_LIMIT 10

int main() {
    
    char str[MAX_LIMIT];
    
    printf("What OS are you running?\n");
    
    printf("Example: WINDOWS, LINUX, MACOS\n");
    
    fgets(str, MAX_LIMIT, stdin);
    
    printf("%s", str);
    
    printf("\n");
    
    return 0;
    
}
*/

#include <stdio.h>

#define MAX_LIMIT 10

int main() {
    
    char str[MAX_LIMIT];
    
    printf("What OS are you running?\n");
    
    printf("Example: WINDOWS, LINUX, MACOS\n");
    
    fgets(str, MAX_LIMIT, stdin);
    /*
    if (str == "WINDOWS") {
        
        printf("SUCCESS");
        
    }
    */
    return 0;
    
}
