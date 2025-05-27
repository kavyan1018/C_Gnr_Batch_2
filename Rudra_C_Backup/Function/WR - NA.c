// With return type No arguments

#include <stdio.h>
#include <conio.h>

// Function declaration
int add();
void main()
{

    int ans;

    ans = add();

    printf("Sum is: %d\n", ans);
}

// this will perform addition of two numbers
int add()
{
    int a, b, ans;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    ans = a + b;
    
    return ans;

}