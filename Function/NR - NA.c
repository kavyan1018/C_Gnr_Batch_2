#include<stdio.h>
#include<conio.h>

// Define function prototype
int addition();
void main()
{
    // Call the addition function
    addition();
}

int addition()
{
    // Declare variables
    int a, b, sum;

    // clrscr();

    // Prompt user for input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculate sum
    sum = a + b;

    // Display result
    printf("Sum = %d\n", sum);
    // Wait for user to press a key before exiting

    // getch();

    // Return to the calling function
}