#include <stdio.h>

// Define structure for student
struct Student {
    char name[50];
    int roll;
    float marks;
    char grade;
};

int main() {
    int n, i;

    // Input number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Array of structures
    struct Student students[n];

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);

        // Calculate grade based on marks
        if (students[i].marks >= 90)
            students[i].grade = 'A';
        else if (students[i].marks >= 75)
            students[i].grade = 'B';
        else if (students[i].marks >= 60)
            students[i].grade = 'C';
        else if (students[i].marks >= 40)
            students[i].grade = 'D';
        else
            students[i].grade = 'F';
    }

    // Print student records
    printf("\n--- Student Records ---\n");
    for (i = 0; i < n; i++) {
        printf("Name   : %s\n", students[i].name);
        printf("Roll   : %d\n", students[i].roll);
        printf("Marks  : %.2f\n", students[i].marks);
        printf("Grade  : %c\n", students