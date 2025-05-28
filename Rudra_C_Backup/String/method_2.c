#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
    char a[30], b[30];

    // -> strcpy() : copy string
    // -> strcat() : concatenate string
    // -> strlen() : length of string
    // -> strcmp() : compare two strings

    // -> strcpy() : copy string

    printf("Enter a string: ");
    gets(a);

    printf("Enter b string: ");
    gets(b);


    // strcpy(b, a);

    // strcat(a, b);
 
    // printf("Length of string a: %d\n", strlen(a));


    if(strcmp(a, b) == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }
}