// // syntax of if else statement

// #include <stdio.h>
// #include <conio.h>

// void main()
// {
//     int a = 10;

//     // if statement (Condition)
//     if(a > 9)
//     {
//         // if condition is true then this block of code will execute
//         printf("a is greater than 9\n");
//     }
//     else{
//         // if condition is false then this block of code will execute
//         printf("a is less than 9\n");
//     }
// }



// // take input from user and check if which number is bigger


#include <stdio.h>
#include <conio.h>

void main()
{
    // user throw input two numbers and we will check which number is bigger
    int a,b;


    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // if statement (Condition)

    if(a > b)
    {
        printf("a is greater than b\n");
    }
    else{
        printf("b is greater than a\n");
    }

}