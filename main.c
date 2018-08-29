//
//  main.c
//  COMPILER
//
//  Created by Larson Carter on 8/29/18.
//  Copyright © 2018 Larson Carter. All rights reserved.
//

/*
#include <stdio.h>


int main(int argc, const char * argv[]) {
    
    printf("What OS are You Running?\n");
    
    return 0;
    
}

*/

#include <stdio.h>

#define MAX_LIMIT 7 // MAX INPUT SHOULD BE WINDOWS

int main() {
    
    char str[MAX_LIMIT];
    
    printf("What OS are you running?\n");
    
    printf("Example: WINDOWS, LINUX, MACOS\n");
    
    fgets(str, MAX_LIMIT, stdin);
    
    printf("%s", str);
    
    return 0;
    
}
