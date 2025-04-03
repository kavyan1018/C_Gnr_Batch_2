/*
    gets() --> scanf()
    puts() --> printf()

*/


#include <stdio.h>
#include <conio.h>


void main()
{
    char a[20];

    puts("Enter Your Name : ");
    gets(a);

    puts("Your Name is : ");
    puts(a);
}