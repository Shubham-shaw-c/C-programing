// Created by SHUBHAM on 15-11-2023.
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number in digit \n");
    scanf("%d",&num);
    if(num>0){
        printf("%d is positive\n",num);
    }else if(num<0){
        printf("%d is negative\n",num);
    }else{
        printf("Entered number is zero\n");
    }
}
