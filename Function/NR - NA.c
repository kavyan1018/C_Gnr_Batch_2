// #include<stdio.h>
// #include<conio.h>

// // Define function prototype
// int addition();
// void main()
// {
//     // Call the addition function
//     addition();
// }

// int addition()
// {
//     // Declare variables
//     int a, b, sum;

//     // clrscr();

//     // Prompt user for input
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     // Calculate sum
//     sum = a + b;

//     // Display result
//     printf("Sum = %d\n", sum);
//     // Wait for user to press a key before exiting

//     // getch();

//     // Return to the calling function
// }

#include <stdio.h>
#include <conio.h>

int addition();
int Subtraction();
int main()
{
    int choice;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter Your Choice :");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        addition();
        break;

    case 2:
        Subtraction();
        break;
    
    default:
        printf("Invalid choice\n");
        break;
    }
}

int addition()
{
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum = %d\n", sum);
}

int Subtraction()
{
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a - b;

    printf("Sum = %d\n", sum);
}