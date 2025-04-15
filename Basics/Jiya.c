#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b=1;

    a = b++ + ++b + b++ + --b + --b + b++ + b-- + b++ + --b + ++b;

    printf("%d", a);
}