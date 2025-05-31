#include<stdio.h>
#include<conio.h>

// structure definition
struct student
{
    /* data */
    int Roll_No;
    char Name[20];
    float Marks;
};



void main()
{
    struct student s;

    printf("Enter the Roll No: ");
    scanf("%d", &s.Roll_No);

    printf("Enter the Name: ");
    scanf("%s", s.Name);

    printf("Enter the Marks: ");
    scanf("%f", &s.Marks);


    printf("\n\nStudent Details:\n");
    printf("Roll No: %d\n", s.Roll_No);
    printf("Name: %s\n", s.Name);
    printf("Marks: %.2f\n", s.Marks);
}