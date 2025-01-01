#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    int notes_500 = 0, notes_200 = 0, notes_100 = 0, notes_50 = 0, notes_20 = 0, notes_10 = 0, notes_5 = 0, notes_2 = 0, notes_1 = 0;

    printf("Enter amount: ");
    scanf("%d", &n);

    if(n >= 500)
    {
        notes_500 = n / 500;
        n = n % 500;
    }
    if(n >= 200)
    {
        notes_200 = n / 200;
        n = n % 200;
    }
    if(n >= 100)
    {
        notes_100 = n / 100;
        n = n % 100;
    }
    if(n >= 50)
    {
        notes_50 = n / 50;
        n = n % 50;
    }
    if(n >= 20)
    {
        notes_20 = n / 20;
        n = n % 20;
    }
    if(n >= 10)
    {
        notes_10 = n / 10;
        n = n % 10;
    }
    if(n >= 5)
    {
        notes_5 = n / 5;
        n = n % 5;
    }
    if(n >= 2)
    {
        notes_2 = n / 2;
        n = n % 2;
    }
    if(n >= 1)
    {
        notes_1 = n / 1;
        n = n % 1;
    }

    printf("500 notes: %d\n", notes_500);
    printf("200 notes: %d\n", notes_200);
    printf("100 notes: %d\n", notes_100);
    printf("50 notes: %d\n", notes_50);
    printf("20 notes: %d\n", notes_20);
    printf("10 notes: %d\n", notes_10);
    printf("5 notes: %d\n", notes_5);
    printf("2 notes: %d\n", notes_2);
    printf("1 notes: %d\n", notes_1);

}