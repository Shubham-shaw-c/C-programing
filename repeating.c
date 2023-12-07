#include<stdio.h>
int main(){
    int count;
    char a;
    printf("Enter something you want to print multiple times\n");
    scanf("%s",&a);
    printf("How many times you want to print\n ");
    scanf("%d",&count);
    for(int i=1;i<count;i++){
        printf("%d %s",i,a);

    }


}