#include <stdio.h>
int main() 
{
    //ques11
    int p,n,x;
    printf("Enter the number of Elements:\n");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter the Elements of the Array:\n");
    for(int i=0;i<n;i++)
    {
        printf("Element %d ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the position at which new element has to be inserted and the value of element respectively:\n");
    scanf("%d",&p);
    scanf("%d",&x);
    for(int i=n;i>=p-1;i--)
    {
        a[i+1]=a[i];
    }
    a[p-1]=x;
    for(int i=0;i<n+1;i++)
    {
        printf("Element %d= %d\n",i+1,a[i]);
    }
    return 0;
}