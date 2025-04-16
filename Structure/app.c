#include<stdio.h>
#include<conio.h>



struct app
{
    int roll_no;
    char name[20];
    float marks;
};


void main()
{
    struct app a[100];
    int choice;
    int count = 0;


    do
    {
        
        printf("========Student Information System========\n");

        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Update Student\n");
        printf("4. Delete Student\n");
        printf("5. Search Student\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add_student(&count, a);   
            break;

        case 2:
            display_students(count, a);   
            break;
        
        case 3:
            update_student(count, a);   
            break;

        case 4:
            printf("Delete Student functionality not implemented yet.\n");
            break;
        
        case 5:
            printf("Search Student functionality not implemented yet.\n");
            break;
        
        default:
            if (choice != 0)
            {
                printf("Invalid choice! Please try again.\n");
            }
            break;
        }




    } while (choice != 0);   
}

void add_student(int *count , struct app a[])
{

    printf("---Enter the Student Details %d---\n", *count);

    printf("Enter Roll No: ");
    scanf("%d", &a[*count].roll_no);

    printf("Enter Name: ");
    scanf("%s", a[*count].name);

    printf("Enter Marks: ");
    scanf("%f", &a[*count].marks);


    (*count)++;

    printf("Student Added Successfully!\n");
}


void display_students(int count, struct app a[])
{
    printf("---Student List---\n");

    for (int i = 0; i < count; i++)
    {
        printf("Roll No: %d\n", a[i].roll_no);
        printf("Name: %s\n", a[i].name);
        printf("Marks: %.2f\n", a[i].marks);
        printf("------------------\n");
    }
}

void update_student(int count, struct app a[])
{
    int roll_no, found = 0;

    printf("Enter Roll No to update: ");
    scanf("%d", &roll_no);

    for (int i = 0; i < count; i++)
    {
        if (a[i].roll_no == roll_no)
        {
            found = 1;

            printf("---Update the Student Details %d---\n", roll_no);

            printf("Enter Name: ");
            scanf("%s", a[i].name);

            printf("Enter Marks: ");
            scanf("%f", &a[i].marks);

            printf("\n---Student Details Updated Successfully---\n");
        }
    }

    if (!found)
    {
        printf("Student with Roll No %d not found.\n", roll_no);
    }
}