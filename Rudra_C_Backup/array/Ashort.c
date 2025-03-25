#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5], i, j, count;

    printf("Enter 5 elements of array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        // 12 , 23 , 45, 1

        for(j = 0; j < 5; j++)
        {
            if(a[i] > a[j])
            {
                count = a[i];
                a[i] = a[j];
                a[j] = count;
            }
        }
    }
    
    printf("Sorted array is:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    
}