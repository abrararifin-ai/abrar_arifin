#include <stdio.h>  // Including standard input-output library

// Defining a structure to store student data
struct Student {
    char name[50];   // Character array to store the name
    int roll;        // Integer to store the roll number
    float marks;     // Float to store the marks
};

int main() {
    int n, i;                      // Declaring integer variables for limit and loop
    float totalMarks = 0.0;        // Declaring and initializing total marks
    float average;                 // Declaring variable for average

    printf("Enter the number of students: "); // Asking for user input
    scanf("%d", &n);                          // Reading the number of students

    struct Student s[n];           // Creating an array of structures based on user input

    // Starting a loop to take input for each student
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1); // Displaying student count

        printf("Enter Name: ");         // Prompt for name
        scanf("%s", s[i].name);         // Reading string (name) into structure

        printf("Enter Roll Number: ");  // Prompt for roll
        scanf("%d", &s[i].roll);        // Reading integer (roll) into structure

        printf("Enter Marks: ");        // Prompt for marks
        scanf("%f", &s[i].marks);       // Reading float (marks) into structure

        totalMarks += s[i].marks;       // Adding current marks to the total sum
    }

    // Calculating the average marks
    average = totalMarks / n;           // Dividing total by the number of students

    // Displaying the output header
    printf("\n--- Student Records ---\n");

    // Starting a loop to print stored data
    for (i = 0; i < n; i++) {
        // Printing Name, Roll, and Marks of each student
        printf("Student %d: Name: %s, Roll: %d, Marks: %.2f\n", i + 1, s[i].name, s[i].roll, s[i].marks);
    }

    // Displaying the final average
    printf("\nAverage Marks of the class: %.2f\n", average);

    return 0; // Indicating that the program finished successfully
}
