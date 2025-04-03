#include<stdio.h>
#include<conio.h>
#include<string.h>

#define MAX_BOOKS 5
#define MAX_LENGTH 50

void main()
{
    
    char b[MAX_BOOKS][MAX_LENGTH];
    char s[MAX_LENGTH];
    int i, j, n;

    // Inputs the name of books
    printf("Enter Name of books: ");
    for (i = 0; i < MAX_BOOKS; i++)
    {
        printf("\nBook %d: ", i + 1); // 1st book is 1
        gets(b[i]); // gets() is used to read a string with spaces
    }

    // input the name of book to search
    printf("Enter the name of book to search: ");
    gets(s); 


    // Search for the book in the list
    for (i = 0; i < MAX_BOOKS; i++)
    {
        if (strcmp(b[i], s) == 0) 
        {
            n = 1; // 1st book is 1
            break;
        }
    }

    // Display the result
    if (n)
    {
        printf("Book found");
    }
    else
    {
        printf("Book not found\n");
    }
}