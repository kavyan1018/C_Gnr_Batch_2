#include <stdio.h>
#include <conio.h>

// Structure to store student information
struct stu
{
    int roll_no;
    char name[20];
    float marks;
};

void main()
{

    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct stu s[n];

    printf("\n--------Enter Student Information %d :----------\n", n);
    // Loop to enter student information
    for (i = 0; i < n; i++)
    {

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Loop to display student information
    printf("\n--------Student Information:----------\n");
    for (i = 0; i < n; i++)
    {

        printf("\nRoll number: %d", s[i].roll_no);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f \n", s[i].marks);
    }
}