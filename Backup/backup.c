#include <stdio.h>
#include <string.h>

#define MAX 100

// Structure Declaration
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

struct Student students[MAX];
int totalStudents = 0;

// Function Declarations
void addStudent();
void displayStudents();
void updateStudent();

int main() {
    int choice;

    do {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Update Student by Roll Number\n");
        printf("4. Display Student by Roll No\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: 
                addStudent();
                break;
            case 2: 
                displayStudents();
                break;
            case 3: 
                updateStudent();
                break;
            // case 4:
            case 5: 
                printf("Exiting the program. Goodbye!\n");
                break;
            default: 
                printf("Invalid choice! Please enter again.\n");
        }
    } while(choice != 4);

    return 0;
}

// Function to Add Student
void addStudent() {
    if (totalStudents >= MAX) {
        printf("Student list is full!\n");
        return;
    }

    printf("\nEnter Student Name: ");
    scanf(" %[^\n]", students[totalStudents].name);

    printf("Enter Roll Number: ");
    scanf("%d", &students[totalStudents].rollNumber);

    printf("Enter Marks: ");
    scanf("%f", &students[totalStudents].marks);

    printf("Student added successfully!\n");
    totalStudents++;
}

// Function to Display All Students
void displayStudents() {
    if (totalStudents == 0) {
        printf("\nNo students to display!\n");
        return;
    }

    printf("\nStudent Details:\n");
    printf("Roll No\tName\t\tMarks\n");
    printf("------------------------------\n");
    for (int i = 0; i < totalStudents; i++) {
        printf("%d\t%s\t\t%.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }
}

// Function to Update Student by Roll Number
void updateStudent() {
    if (totalStudents == 0) {
        printf("\nNo students available to update!\n");
        return;
    }

    int rollNo, found = 0;
    printf("\nEnter Roll Number to Update: ");
    scanf("%d", &rollNo);

    for (int i = 0; i < totalStudents; i++) {
        if (students[i].rollNumber == rollNo) {
            found = 1;

            printf("Existing Details - Name: %s, Marks: %.2f\n", students[i].name, students[i].marks);
            printf("Enter New Name: ");
            scanf(" %[^\n]", students[i].name);
            printf("Enter New Marks: ");
            scanf("%f", &students[i].marks);

            printf("Student details updated successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Student with Roll Number %d not found.\n", rollNo);
    }
}
