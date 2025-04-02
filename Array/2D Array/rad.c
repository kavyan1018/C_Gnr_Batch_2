#include<stdio.h>
#include<conio.h>

void main()
{
    int a[2][2];
    int i, j, sum = 0;

    printf("Enter the 12 Numbers:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    

    printf("Your Matrix is here:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d  ", a[i][j]);
            sum = sum + a[i][j];
        }
        printf(" = %d\n", sum);
        printf("\n");
    }
    // printf("Sum of all elements is: %d", sum);
}