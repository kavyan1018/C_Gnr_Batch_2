#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter Third number: ");
    scanf("%d", &c);


    if(a > b && a > c)
    {
        printf(" A Max\n");
    }
    else if(b > a && b > c){
        printf(" B Max\n");
    }
    else{
        printf(" C Max\n");
    }


}