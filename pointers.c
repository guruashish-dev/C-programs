// //prg usng pointers
// #include<stdio.h>
// int main()
// {
//     int a, *p;
//     p=&a;
//     a=25;
//     printf("\nValue in a = %d", a);
//     printf("\nValue of a using pointer", *p);
//     printf("\nValue in p p = %d", p);
//     printf("\nAddress of a ", &a);
//     printf("Address of p ", &p);
//     printf("Address of a ", p);
//     return 0;



//.write a c prg to assign an integer varialble address, character variable address, float variable
#include <stdio.h>

int main() {
    // Declare variables
    int intVar = 10;
    char charVar = 'A';
    float floatVar = 3.14;

    // Declare pointers for each variable type
    int *intPtr;
    char *charPtr;
    float *floatPtr;

    // Assign the address of the variables to the pointers
    intPtr = &intVar;
    charPtr = &charVar;
    floatPtr = &floatVar;

    // Print the addresses
    printf("Address of intVar: %p\n", (void*)intPtr);
    printf("Address of charVar: %p\n", (void*)charPtr);
    printf("Address of floatVar: %p\n", (void*)floatPtr);

    return 0;
}
