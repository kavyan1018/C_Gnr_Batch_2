#include<stdio.h>
#include<conio.h>

void main()
{
    int a[2][2], i, j;

    printf("Enter the elements of 2D array:\n");

    // using nested for loop to take input

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // using nested for loop to print the elements


    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

}