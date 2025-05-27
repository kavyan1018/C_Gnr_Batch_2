// No return type No arguments

#include <stdio.h>
#include <conio.h>

// Function declaration
void add();
void main()
{
    // Function call
    add();
}

// this will perform addition of two numbers
void add()
{
    int a, b, sum;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum of %d and %d is: %d\n", a, b, sum);
}