// shorting array
#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5],i,j,temp;

    printf("Enter 5 numbers\n");

    for (i = 1; i <= 5; i++)
    {
        scanf("%d",&a[i]);
    }
    /*
            a = b  
            b = c
            c = a
    */
    for (i = 1; i <= 5; i++)
    {
        for (j = i+1; j <= 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }   
        }
    }
    
    printf("Assorted numbers are\n");
    for (i = 1; i <= 5; i++)
    {
        printf("%d\n",a[i]);
    }
}