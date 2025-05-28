#include<stdio.h>
#include<conio.h>

void main()
{
    char a[20];

    // puts function is used to print a string
    puts("Enter a string: ");

    // gets function is used to read a string from the user
    gets(a);


    // puts function is used to print the string entered by the user
    puts("You entered: ");
    puts(a);
}