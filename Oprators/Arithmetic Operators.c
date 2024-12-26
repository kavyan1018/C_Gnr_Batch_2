// + , - , * , / , % 


/*
    Name :- Kavyan Sir
    Date :- 24-12-2024
    obj :- Arithmetic Operators
*/

// #include<stdio.h>
// #include<conio.h>

// void main()
// {
//     // constant value 
//     int a = 15, b = 5;
//     // Addition

//     printf("Addition of %d and %d is %d\n",a,b,a+b);
// }


// take input from user

#include<stdio.h>
#include<conio.h>

void main()
{ 
    int a, b, sum;
    
    printf("Enter the value of a \n");
    scanf("%d",&a);

    printf("Enter the value of b \n");
    scanf("%d", &b);

    sum = a + b;
    

    printf("Addition of %d and %d is %d\n",a,b,sum);
}
