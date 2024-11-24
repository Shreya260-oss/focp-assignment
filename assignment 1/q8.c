#include <stdio.h>

int main(){
    int i,num,j;
    printf("enter max line to print");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        for( j=0; j<i ;j++)
        {
            printf("%d",(i+j)%2);
    }
    printf("\n");
    }
    return 0;
}