#include<stdio.h>
#include<conio.h>
int addfun(int a, int b);
void main()
{
    int sum, a, b;

    sum = addfun(a , b); 

    printf("The sum is: %d",sum);
}

int addfun(int a, int b)
{
    
    int sum;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    sum=a+b;

}