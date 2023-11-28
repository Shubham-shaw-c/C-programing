#include<stdio.h>
int main(){
    int num;
    int count = 0;
    printf("Enter the number in integer\n");
    scanf("%d", &num);
    while(num!=0){
        count=count+1;
        num=num/10;
    }printf("%d", count);
}
