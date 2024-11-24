
#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c,choice;
    printf("enter first no. = ");
    scanf("%d",&a);
    printf("enter second no. = ");
    scanf("%d",&b);
    printf("Enter 1,2,3 and 4 to swap numbers by various methods = ");
    scanf("%d",&choice);
    switch(choice){
    //method 1
    case 1:
    c=a;
    a=b;
    b=c;
    printf("First no. = %d",a);
    printf("\nSecond no. = %d",b);
    break;
    //method 2
    case 2:
    a=a+b;
    b=a-b;
    a=a-b;
    printf("First no. = %d",a);
    printf("\nSecond no. = %d",b);
    break;
    //method 3
    case 3:
    a=a*b;
    b=a/b;
    a=a/b;
    printf("First no. = %d",a);
    printf("\nSecond no. = %d",b);
    break;
    //method 4
    case 4:
    a=a^b;
    b=a^b;
    a=a^b;
    printf("First no. = %d",a);
    printf("\nSecond no. = %d",b);
    break;}
    return 0;
}