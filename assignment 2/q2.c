#include <stdio.h>

int main() {
    int r; 

    
    printf("Enter the number of students: ");
    scanf("%d", &r);

    int marks[r]; 
    char grades[r]; 

    
    printf("Enter the marks of %d students:\n", r);
    for (int i = 0; i < r; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    
    for (int i = 0; i < r; i++) {
        if (marks[i] >= 90) {
            grades[i] = 'A';
        } else if (marks[i] >= 80) {
            grades[i] = 'B';
        } else if (marks[i] >= 70) {
            grades[i] = 'C';
        } else if (marks[i] >= 60) {
            grades[i] = 'D';
        } else {
            grades[i] = 'F';
        }
    }

    
    printf("\nMarks and Grades of Students:\n");
    for (int i = 0; i < r; i++) {
        printf("Student %d: Marks = %d, Grade = %c\n", i + 1, marks[i], grades[i]);
    }

    return 0;
}
