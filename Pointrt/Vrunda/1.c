#include<stdio.h>
#include<conio.h>

void main()
{
    int x = 10;


    // Pointer declaration and initialization
    int *p = &x;

    // Printing the current value
    printf("Value of x = %d\n", *p);

    // changing the value
    *p = 20;

    // Printing the updated value
    printf("Value of x = %d\n", *p);

}