/* 
 * File:   main.c
 * Author: tenzinwangchuk
 *
 * Created on February 2, 2015, 7:36 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

typedef struct {
   char name; 
   char u;
} myStruct ;

int main() {
    
    printf("%i\n", sizeof(myStruct));

    return (EXIT_SUCCESS);
}

