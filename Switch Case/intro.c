// what is switch case in c programming
// --> switch case is a control statement that allows us to choose only one choice from the multiple choices.



#include <stdio.h>
#include <conio.h>

void main()
{
    int n1,n2,choice,sum;


    printf("Enter the First number: ");
    scanf("%d", &n1);   

    printf("Enter the Second number: ");
    scanf("%d", &n2);


    printf("Enter the choice: ");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    scanf("%d", &choice);

    switch (choice)
    {
    // case /* constant-expression */:
    //     /* code */
    //     break;

    case 1:
        sum = n1 + n2;
        printf("Addition of %d and %d is %d", n1, n2, sum);
        break;

    case 2:
        sum = n1 - n2;
        printf("Subtraction of %d and %d is %d", n1, n2, sum);
        break;

    default:
        break;
    }   

}