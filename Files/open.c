// open the file
/*
#include<stdio.h>
#include<conio.h>

void main()
{
    FILE* fptr;

    fptr = fopen("open.txt", "r");

    // checking if file opened successfully
    if(fptr == NULL)
    {
        printf("the file is not opened");
    }
    else
    {
        printf("the file is opened successfully\n");
        // close the file
        fclose(fptr);
    }
}*/


// Fprintf Function

// #include<stdio.h>
// #include<conio.h>

// void main()
// {
//     FILE* fptr;

//     fptr = fopen("Frpintf.txt", "w");

//     // checking if file opened successfully
//     if(fptr == NULL)
//     {
//         printf("the file is not opened");
//     }
    
//     fprintf(fptr, "This is a string written using fprintf function\n");

//     fclose(fptr); // close the file
// }

// bin file

#include<stdio.h>
#include<conio.h>

void main()
{
    FILE* fptr;

    fptr = fopen("bin.bin", "wb");

    // checking if file opened successfully
    if(fptr == NULL)
    {
        printf("the file is not opened");
    }
    
    int a = 10, b = 20, c = 30;

    fwrite(&a, sizeof(int), 1, fptr); // write a to file

    fclose(fptr); // close the file
}