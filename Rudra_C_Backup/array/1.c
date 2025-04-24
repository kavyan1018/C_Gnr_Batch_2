#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5], i;

    printf("Enter 1st element of array: ");
    scanf("%d", &a[0]);

    printf("Enter 2nd element of array: ");
    scanf("%d", &a[1]);

    printf("Enter 3rd element of array: ");
    scanf("%d", &a[2]);


    printf("Enter 4th element of array: ");
    scanf("%d", &a[3]);

    printf("Enter 5th element of array: ");
    scanf("%d", &a[4]);



    printf("The elements of array are: ");
    printf("%d ", a[0]);
    printf("%d ", a[1]);
    printf("%d ", a[2]);
    printf("%d ", a[3]);
    printf("%d ", a[4]);
    



    // using loop

    // printf("Enter 5 elements of array: ");

    // for (i = 0; i < 5; i++)
    // {
    //     scanf("%d", &a[i]);
    // }
    
    // printf("The elements of array are: ");
    // for (i = 0; i < 5; i++)
    // {
    //     printf("%d ", a[i]);
    // }
}