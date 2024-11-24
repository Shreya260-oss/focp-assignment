#include <stdio.h>
#include <math.h>
int main() {
    int binary, decimal = 0, base = 1;
    printf("Enter a binary number (max 9 digits): ");
    scanf("%d", &binary);
    while (binary) 
    {
        decimal += (binary % 10) * base;
        binary /= 10;
        base *= 2;
    }
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}