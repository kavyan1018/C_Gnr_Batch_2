// No return type With arguments

#include <stdio.h>
#include <conio.h>

// Function declaration
void add();
void main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Function call
    add(a, b);
}

// this will perform addition of two numbers
void add(int a, int b)
{
    int sum;

    sum = a + b;

    printf("Sum of %d and %d is: %d\n", a, b, sum);
}