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
        printf("---Enter the Student Details %d---\n",i +1);

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
}