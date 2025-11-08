#include<stdio.h>
#include<conio.h>

void main()
{
    int x = 20;
    int y = 30;


    // Pointer declaration and initialization
    int *p = &x;
    int *e = &y; // You can also point to y

    // Printing the current value
    printf("Value of x = %d\n", *p);
    printf("Value of y = %d\n", *e);

    // changing the value
    *p = 20;

    // Printing the updated value
    printf("Value of x = %d\n", *p);

}