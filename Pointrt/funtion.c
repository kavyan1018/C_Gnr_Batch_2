#include<stdio.h>
#include<conio.h>

void swap(int *a , int *b);
int main()
{
    int a , b;
    a = 100 , b = 200;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);

    printf("After swap: a = %d, b = %d\n", a, b);
}

void swap(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    
}