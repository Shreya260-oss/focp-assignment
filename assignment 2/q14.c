#include <stdio.h>
int main() 
{
    //ques14
    int count=0;
    int a[15]={67,69,86,69,92,45,34,62,86,56,72,92,35,66,45};
    printf("the Duplicate Elements are:\n");
    for(int i=0;i<15;i++)
    {
        for(int j=0;j!=i;j++)
        {
            if(a[j]==a[i])
            printf("%d,",a[j]);
        }
    }
    return 0;
}