// what is string in c ?
// string is a array of char
// char -> %s  a[50]


#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char a[50];

    printf("Enter Your Name : ");
    scanf("%s", a);

    printf("Your Name is : %s\n", a);

}