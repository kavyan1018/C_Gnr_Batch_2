#include <stdio.h>
#include <conio.h>

// structure definition
struct student
{

    int Roll_No;
    char Name[20];
    float Marks;
};

void main()
{

    int n;
    printf("Eneter the number of students: ");
    scanf("%d", &n);

    struct student a[n];

    // using loops

    for (int i = 0; i < n; i++)
    {
        printf("---Enter the Student Details %d---\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &a[i].Roll_No);

        printf("Enter Name: ");
        scanf("%s", a[i].Name);

        printf("Enter Marks: ");
        scanf("%f", &a[i].Marks);
    }

    printf("\n---Student Details---\n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll No: %d\n", a[i].Roll_No);
        printf("Name: %s\n", a[i].Name);
        printf("Marks: %.2f\n\n", a[i].Marks);
    }

    // Update the Student data by Roll No

    int roll_no, found = 0;

    printf("\nEnter Roll No to update: ");
    scanf("%d", &roll_no);

    for (int i = 0; i < n; i++)
    {

        if (a[i].Roll_No == roll_no)
        {
            found = 1;

            printf("---Update the Student Details %d---\n", roll_no);

            printf("Enter Name: ");
            scanf("%s", a[i].Name);

            printf("Enter Marks: ");
            scanf("%f", &a[i].Marks);

            printf("\n---Student Details Updated Successful---\n");
        }
    }

    if (!found)
    {
        printf("\nRoll No %d not found.\n", roll_no);
    }


    // Display the updated student details


    printf("\n---Updated Student Details---\n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll No: %d\n", a[i].Roll_No);
        printf("Name: %s\n", a[i].Name);
        printf("Marks: %.2f\n\n", a[i].Marks);
    }

}