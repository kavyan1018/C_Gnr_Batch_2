#include<stdio.h>
#include<conio.h>

void main()
{
    int a[3][2] = {
        {1,2},
        {3,4},
        {5,6}
    };
    printf("%d \t %d\n", a[0][0], a[0][1]);
    printf("%d \t %d\n", a[1][0], a[1][1]);
    printf("%d \t %d\n", a[2][0], a[2][1]);
}