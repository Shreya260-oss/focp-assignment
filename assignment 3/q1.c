#include <stdio.h>
#include <math.h>

void calculatorMenu() {
    printf("\nSimple Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Logarithmic values (base 10)\n");
    printf("6. Square root\n");
    printf("7. Exit\n");
    printf("Choose an option: ");
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        calculatorMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Addition
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;

            case 2:
                // Subtraction
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;

            case 3:
                // Multiplication
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;

            case 4:
                // Division
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;

            case 5:
                // Logarithmic values
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 > 0) {
                    result = log10(num1);
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Logarithm undefined for non-positive numbers.\n");
                }
                break;

            case 6:
                // Square root
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 >= 0) {
                    result = sqrt(num1);
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Square root of negative numbers is not allowed.\n");
                }
                break;

            case 7:
                // Exit
                printf("Exiting the calculator. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 7);

    return 0;
}
