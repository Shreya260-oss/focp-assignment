#include <stdio.h>

int main() {
    int i,n;
    printf("Enter  no. of students  = ");
    scanf("%d",&n);
    int marks[n];
    printf("Enter marks for %d students = ",n);
    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    int max=marks[0];
    int min=marks[0];
    for(i=1;i<n;i++){
        if(marks[i]>max){
            max=marks[i];
        }
        if(marks[i]<min){
            min=marks[i];
        }
    }
    printf("Maximum marks scored is = %d",max);
    printf("\nMinimum marks scored is = %d",min);
    return 0;
}