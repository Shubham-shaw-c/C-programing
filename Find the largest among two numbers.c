// Created by SHUBHAM on 16-11-2023.
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the first number in integer =\n");
    scanf("%d",&num1);
    printf("Enter the second number in integer =\n");
    scanf("%d",&num2);
    if(num1>num2){
        printf("%d = num1 is greater\n",num1);
        printf("%d = num2 is smaller\n",num2);
    }else if(num2>num1){
        printf("%d = num2 is greater\n",num2);
        printf("%d = num1 is smaller\n",num1);
    }else{
        printf("Both numbers are equal");
    }



}
