#include <stdio.h>


int main(){

int num[10],i,n,sum=0,avg;

printf("Enter no of students: ");

scanf("%d",&n);

for(i=0;i<n;++i){
printf("Enter marks of %d student ", i+1);
scanf("%d", &num[i]);
sum+=num[i];
}


avg= sum/n;

printf("Average score= %d",avg);

return 0;

}