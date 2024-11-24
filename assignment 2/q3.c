#include<stdio.h>

int main() {
    int b,i;
    int count=0;
    printf("no of Students in Class = ");
    scanf("%d",&b);
    int a[b];

    for(i=0;i<b;i++){
        printf("Enter Marks of Student %d = ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<b;i++){
        if(a[i] == 99){
            printf("Student %d has scored the first 99 Marks",i+1);
            count++;
            break;
        }
        else{
            
            continue;
        }
    }
    if(count != 1){
        printf("\nNobody scored 99 marks");
    }


}