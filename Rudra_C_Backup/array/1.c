#include<stdio.h>
#include<conio.h>

void main()
{
    // 1 - way to declare an array
    int a[5] = {1, 2, 3, 4, 5};
    int i , sum = 0;

    // printf("a[1] = %d\n", a[1]);
    // printf("a[2] = %d\n", a[4]);
    // printf("a[3] = %d\n", a[2]);
    // printf("a[4] = %d\n", a[3]);
    // printf("a[5] = %d\n", a[4]);


    // for (i = 0; i < 5; i++)
    // {
    //     printf("a[%d]    = %d\n", i, a[i]);
    // }


    for (i = 0; i < 5; i++)
    {
        printf("a[%d]    = %d\n", i, a[i]);
        sum += a[i];
    }

    printf("Sum of array = %d\n", sum);
    // printf("Sum of array = %d\n", sum);

}