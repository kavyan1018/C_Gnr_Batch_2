#include<stdio.h>
#include<conio.h>

// Structure to store student information
struct stu
{
    int roll_no;
    char name[20];
    float marks;
};


void main()
{
    struct stu s;


    printf("Enter roll number: ");
    scanf("%d",& s.roll_no);

    printf("Enter name: ");
    scanf("%s",s.name);

    printf("Enter marks: ");
    scanf("%f",& s.marks);


    printf("\nRoll number: %d",s.roll_no);
    printf("\nName: %s",s.name);
    printf("\nMarks: %.2f",s.marks);

}