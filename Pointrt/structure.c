#include<stdio.h>
#include<conio.h>

struct Student
{
    int rollno;
    char name[20];
};


void main()
{
    struct Student s[3], *p;
    
    printf("Enter details of 3 students:\n");
    for (p = s; p < s + 3; p++)
    {
        printf("Roll No: ");
        scanf("%d", &p->rollno);
        printf("Name: ");
        scanf("%s", p->name);
    }
    
    p = s;
    printf("\nDetails of students:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Roll No: %d, Name: %s\n", p->rollno, p->name);
        p++;
    }
}