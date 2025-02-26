#include<stdio.h>
#include<conio.h>

void main()
{
    
    int arr[20],i,no;

    printf("Enter the Number of value u want to : max is 20 :- ");
    scanf("%d",&no);

    for (i = 0; i < no; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Here is your Reverce Array :");

    for (i = no-1; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }
}