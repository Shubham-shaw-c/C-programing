#include<stdio.h>
int main(){
    int size;
    char subject;
    float marks,sum=0;
    printf("Enter the number of subject\n");
    scanf("%d",&size);
    float Marks[size];
    for(int i=0;size==0;size--){
        printf("Enter the subject name");
        scanf("%s",&subject);
        printf("Enter the marks\n");
        scanf("%f",&marks);
        sum=sum+marks;
    }printf("%f",sum);
}