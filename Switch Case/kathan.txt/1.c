#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,choice , sum = 0;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);


    switch (choice)
    {
    case 1:
        sum = a + b;
        printf("Addition: %d\n",sum);
        // break;
    
    case 2:
        sum = a - b;
        printf("Subtraction: %d\n",sum);
        break;

    default:
        printf("Invalid choice\n");
        break;
    }

}