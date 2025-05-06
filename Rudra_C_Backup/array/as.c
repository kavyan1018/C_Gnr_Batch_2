#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5], i,j, temp;

    printf("Enter 5 elements of array: ");
    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 1; i <= 5; i++)
    {
        for (j = i+1; j <= 5 ; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
    }
    printf("The elements after short of array are: ");
    for (i = 1; i <= 5; i++)
    {
        printf("%d ", a[i]);
    }
}