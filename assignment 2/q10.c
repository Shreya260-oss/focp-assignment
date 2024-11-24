#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter the number of elements = ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the element = ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);}
    int k=0;
    for (int i = 0; i <(n); i++) {
        int count = 0; 
        if (arr[i] <= 1) {
            continue;
        }
        for (int j = 2; j <= arr[i] / 2; j++) {
            if (arr[i] % j == 0) {
                count++; 
                break;}
        }
        if (count == 0) {
            k++;}}
    printf("no of prime no in an array %d", k);
    return 0;
}