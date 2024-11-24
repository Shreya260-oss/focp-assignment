#include <stdio.h>

int main() {
    int n; 

    
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n]; 

    
    printf("Enter the marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    
    printf("\nEven/Odd status of scores:\n");
    for (int i = 0; i < n; i++) {
        if (marks[i] % 2 == 0) {
            printf("Student %d: Marks = %d, Status = Even\n", i + 1, marks[i]);
        } else {
            printf("Student %d: Marks = %d, Status = Odd\n", i + 1, marks[i]);
        }
    }

    return 0;
}
