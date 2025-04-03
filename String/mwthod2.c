/*

    strlen - return the length of a string
    strlwr - convert string to lower case
    strupr - convert string to upper case
    strrev - reverse the string
    strcat - concatenate two strings
    strcmp - compare two strings

*/

/*    strlen - return the length of a string     */
// #include <stdio.h>
// #include <conio.h>
// #include <string.h>

// void main()
// {
//     char a[50];

//     printf("Enter Your Name : ");
//     scanf("%s", a);

//     printf("Your Name is : %s\n", a);
//     printf("Length of Your Name is : %d\n", strlen(a));
// }





/*
    strlwr - convert string to lower case
    strupr - convert string to upper case

*/



// #include <stdio.h>
// #include <conio.h>
// #include <string.h>

// void main()
// {
//     char a[50];

//     printf("Enter Your Name : ");
//     scanf("%s", a);

//     printf("Your Name is : %s\n", a);
//     // printf("Length of Your Name is : %s\n", strlwr(a));
//     printf("Length of Your Name is : %s\n", strupr(a));
// }



// strrev - reverse the string

// #include <stdio.h>
// #include <conio.h>
// #include <string.h>

// void main()
// {
//     char a[50];

//     printf("Enter Your Name : ");
//     scanf("%s", a);

//     printf("Your Name is : %s\n", a);
//     printf("Length of Your Name is : %s\n", strrev(a));
// }


// strcat - concatenate two strings

// #include <stdio.h>
// #include <conio.h>
// #include <string.h>

// void main()
// {
//     char a[50], b[50];

//     printf("Enter Your Name : ");
//     scanf("%s", a);

//     printf("Enter Your Surname : ");
//     scanf("%s", b);

//     printf("Your Name is : %s\n", a);
//     printf("Your Surname is : %s\n", b);
//     printf("Your Full Name is : %s\n", strcat(a, b));
// }



// strcmp - compare two strings


#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char c[50], d[50];
    int i;

    printf("Enter Your Name : ");
    scanf("%s", c);

    printf("Enter Your Surname : ");
    scanf("%s", d);

    i = strcmp(c, d);

    if (i == 0)
    {
        printf("Both Strings are Same\n");
    }
    else
    {
        printf("Both Strings are Different\n");
    }
}