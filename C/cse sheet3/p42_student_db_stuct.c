#include <stdio.h>
#include <stdlib.h>
//student structure
struct Student {
    char name[50];
    char stream[50];
    int rollNumber;
    int year;
    int age;
    float gpa;
};

int main() {
    int numStudents;
    printf("Welcome to students' area.\n");
    printf("Enter number of students to store in directory: ");
    scanf("%d", &numStudents);
    struct Student *students = (struct Student *)malloc(numStudents * sizeof(struct Student));
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter student's name: ");
        getchar(); //newline handling
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Enter student's stream: ");
        fgets(students[i].stream, sizeof(students[i].stream), stdin);
        printf("Enter student's roll number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter student's year: ");
        scanf("%d", &students[i].year);
        printf("Enter student's age: ");
        scanf("%d", &students[i].age);
        printf("Enter student's GPA of last semester: ");
        scanf(" %f", &students[i].gpa);
    }
    printf("\n\nxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

    //preview
    printf("\nStudent Details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nDetails of student %d:\n", i + 1);
        printf("Name: %s", students[i].name);
        printf("Stream: %s", students[i].stream);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Year: %d\n", students[i].year);
        printf("Age: %d\n", students[i].age);
        printf("GPA of Last Semester: %.2f\n", students[i].gpa);
    }
    // free(students);

    return 0;
}
