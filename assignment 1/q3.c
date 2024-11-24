#include <stdio.h>

int main(){
    
    int a,b,sub;
    printf("enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    sub=a+~b+1;
    printf("subtraction of%d a %d is %d\n",a,b,sub);
    return 0;
}