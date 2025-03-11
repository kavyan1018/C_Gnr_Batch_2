#include <stdio.h>
#include <conio.h>

void main()
{
    int i, n1, n2, sum;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Modulus");

    printf("\nEnter your choice: ");
    scanf("%d", &i);

    switch (i)
    {

    case 1:
        sum = n1 + n2;
        printf("\nAddition of %d and %d is %d", n1, n2, sum);
        break;

    case 2:
        sum = n1 - n2;
        printf("\nAddition of %d and %d is %d", n1, n2, sum);
        break;

    case 3:
        sum = n1 * n2;
        printf("\nAddition of %d and %d is %d", n1, n2, sum);
        break;

    case 4:
        sum = n1 / n2;
        printf("\nAddition of %d and %d is %d", n1, n2, sum);
        break;

    case 5:
        sum = n1 % n2;
        printf("\nAddition of %d and %d is %d", n1, n2, sum);
        break;
    }

    // return 0;  // getch();
}