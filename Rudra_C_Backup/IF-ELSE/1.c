// syntax of if-else
/*
if (condition)
{
    // code
}
else
{
    // code
}

*/


#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;

    printf("Enter the number  A :");
    scanf("%d",&a);

    printf("Enter the number  B :");
    scanf("%d",&b);

    if (a > b)
    {
        printf("A is greater than B"); 
    }
    else{
        printf("B is greater than A");
    }
    

}