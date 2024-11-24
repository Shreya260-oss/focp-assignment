
#include <stdio.h>

int main() {
    int a; 

    
    printf("Enter the number of students: ");
    scanf("%d", &a);

    int marks[a]; 

    
    printf("Enter the marks of %d students:\n", a);
    for (int i = 0; i < a; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    
    for (int i = 0; i < a; i++) {
        marks[i] += 5;
    }
    printf("\aUpdated marks after increasing by 5:\n");
    for (int i = 0; i < a; i++) {
        printf("Student %d: %d\a", i + 1, marks[i]);
    }

    return 0;
}
