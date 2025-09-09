/* 
1. Write a program to demonstrate the use of storage classes (local variable, global variable, static variable, register variable) in C.
@ Rosha_Thankachan
Completed on : 25/07/2025
*/

#include <stdio.h>
int a = 100;          // Global variables
int b=10;             // Global variables
int main()
{
    int b=15;                                 // Local variable 
    static int c = 5;                        // Static variable
    register int d = 7;                     // Register variable
	printf("STORAGE CLASSES\n");
	printf("---------------\n");
    printf("Global a: %d\n", a);
    printf("Local b: %d\n", b);      
    printf("Static c: %d\n", c);
    printf("Register d: %d\n", d);

    return 0;
}

