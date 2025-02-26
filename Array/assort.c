#include <stdio.h> // Standard input-output library

void main()
{
    int a[5], i, j, temp; // Declaring an array of size 5 and loop variables

    printf("Enter 5 numbers\n");

    // Loop to take input for the array
    for (i = 0; i < 5; i++)
    {                       // Array index starts from 0
        scanf("%d", &a[i]); // Taking input from user
    }

    // Sorting the array using the Bubble Sort algorithm
    for (i = 0; i < 5; i++)
    { // Outer loop for passes
        for (j = i + 1; j < 5; j++)
        { // Inner loop to compare elements
            if (a[i] > a[j])
            {                // If the current element is greater than the next one, swap
                temp = a[i]; // Store the value of a[i] in temp
                a[i] = a[j]; // Assign value of a[j] to a[i]
                a[j] = temp; // Assign temp (original a[i]) to a[j]
            }
        }
    }

    printf("Sorted numbers are\n");

    // Loop to print the sorted array
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]); // Displaying sorted numbers
    }
}