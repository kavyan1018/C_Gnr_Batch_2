#include<stdio.h>
#include<conio.h>

// structure definition
struct student{

    int Roll_No;
    char Name[20];
    float Marks;
};

void main()
{
    struct student a;

    printf("---Enter the Student Details---\n");

    printf("Enter Roll No: ");
    scanf("%d", & a.Roll_No);

    printf("Enter Name: ");
    scanf("%s", a.Name);

    printf("Enter Marks: ");
    scanf("%f", & a.Marks);


    printf("\n---Student Details---\n");
    printf("Roll No: %d\n", a.Roll_No);
    printf("Name: %s\n", a.Name);
    printf("Marks: %.2f\n", a.Marks);

}