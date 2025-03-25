#include<stdio.h>
// #include<conio.h>
void addfun(int no1, int no2);
void main()
{
    int no1, no2;

    printf("Enter two numbers: ");
    scanf("%d %d", &no1, &no2);

    addfun(no1, no2);

}

void addfun(int no1, int no2)
{
    int sum;

    sum = no1 + no2;

    printf("Sum = %d", sum);

}