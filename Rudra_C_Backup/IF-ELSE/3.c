// Take input from user in numbers and print weekdays.(1- monday , 2- tuesday ..... 7- sunday)

#include <stdio.h>
#include <conio.h>

void main()
{

    int a;
    
    printf("Enter the number between 1 to 7 :");
    scanf("%d", &a);

    if (a == 1)
    {
        printf("Monday");
    }
    if (a == 2)
    {
        printf("Tuesday");
    }
    if (a == 3)
    {
        printf("Wednesday");
    }
    else
    {
        printf("Invalid Input");
    }
}