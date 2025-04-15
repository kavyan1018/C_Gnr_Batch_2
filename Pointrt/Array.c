#include<stdio.h>
#include<conio.h>

int main()
{
    int a[5], sum = 0, i , *p;


    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    p = & a[0];

    for (i = 0; i < 5; i++)
    {
        printf("%d\t %u", *p , p);

        sum = sum + *p;
        p++;
    }
    
    printf("\nSum = %d", sum);
    
}