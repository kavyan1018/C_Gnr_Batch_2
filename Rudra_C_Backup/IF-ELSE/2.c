// Find maximum number between three numbers

#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, c;   

    printf("Enter the number  A :");
    scanf("%d", &a);

    printf("Enter the number  B :");
    scanf("%d", &b);

    printf("Enter the number  C :");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("A is max");
    }
    else if (b > a && b > c)
    {
        printf("B is max");
    }
    else{
        printf("C is max");
    }
}