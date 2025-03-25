#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char Name[30];
    int Roll_No;
} Students;

Students s[5];
int totalStudents = 0;

void addStudent();
void DisplayAllStudents();
void listStudentByRollNo();
void updatewithrollno();

int main()
{
    int choice, roll_no;
    do
    {
        system("cls");
        printf("====================\n");
        printf("STUDENT MANAGEMENT SYSTEM\n");
        printf("====================\n");

        printf("\n1--------Add Student.");
        printf("\n2--------Display All Students.");
        printf("\n3--------Display Student by Roll.No.");
        printf("\n4--------Update With Roll.No.");
        printf("\n5--------Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            system("pause");
            break;

        case 2:
            DisplayAllStudents();
            system("pause");
            break;

        case 3:
            printf("Enter Roll Number to Display: ");
            scanf("%d", &roll_no);
            listStudentByRollNo(roll_no);
            system("pause");
            break;

        case 4:
            printf("Enter Roll Number to Update: ");
            scanf("%d", &roll_no);
            updatewithrollno(roll_no);
            system("pause");
            break;

        case 5:
            printf("\nExiting the program\n");
            break;

        default:
            printf("\nInvalid choice, please try again!\n");
            system("pause");
            break;
        }

    } while (choice != 5);

    return 0;
}

void addStudent()
{
    if (totalStudents >= 5)
    {
        printf("\nStudent list is full!\n");
        return;
    }

    printf("Enter Roll No: ");
    scanf("%d", &s[totalStudents].Roll_No);
    printf("Enter Name: ");
    scanf(" %[^]", s[totalStudents].Name);
    totalStudents++;

    printf("\nStudent added successfully!\n");
}

void DisplayAllStudents()
{
    if (totalStudents == 0)
    {
        printf("\nNo students to display!\n");
        return;
    }

    printf("\nAll Students List:\n");
    printf("--------------\n");
    printf("RollNo\tName\n");
    printf("--------------\n");

    for (int i = 0; i < totalStudents; i++)
    {
        printf("%03d\t%s\n", s[i].Roll_No, s[i].Name);
    }

    printf("---------------------------\n");
}

void listStudentByRollNo(int Roll_no)
{
    int index = -1;

    for (int i = 0; i < totalStudents; i++)
    {
        if (s[i].Roll_No == Roll_no)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        printf("Student Found:\n");
        printf("--------------\n");
        printf("RollNo\tName\n");
        printf("--------------\n");
        printf("%03d\t%s\n", s[index].Roll_No, s[index].Name);
        printf("---------------------------\n");
    }
    else
    {
        printf("\nNo Student found with Roll No.: %d\n", Roll_no);
    }
}

void updatewithrollno(int roll_no)
{
    for (int i = 0; i < totalStudents; i++)
    {
        if (roll_no == s[i].Roll_No)
        {
            printf("\nCurrent Data: ");
            printf("\nName: %s \t Roll No: %d", s[i].Name, s[i].Roll_No);
            printf("\n-----Enter New Data-----");
            printf("\nEnter New Name: ");
            fflush(stdin);
            scanf(" %[^]", s[i].Name);
            printf("\nStudent data updated successfully!\n");
            return;
        }
    }
    printf("\nStudent with Roll No. %d not found!\n", roll_no);
}
