#include<stdio.h>
#include<conio.h>

void main()
{
    int a[3][3];
    int i, j;

    printf("Enter the numbers :");

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    printf("Your Matrix is here :\n");

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}