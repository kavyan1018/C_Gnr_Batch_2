#include<stdio.h>
#include<conio.h>

void main()
{
    int sum;

    int addfun(); // function prototype

    printf("The sum is: %d",sum);
}

int addfun()
{
    
    int a,b,sum;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    sum=a+b;

}