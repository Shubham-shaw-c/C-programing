// Created by SHUBHAM on 17-11-2023.
#include<stdio.h>
int main(){
    int age,current_year,birth_year;
    printf("enter the current year\n");
    scanf("%d",&current_year);
    printf("enter the birth year\n");
    scanf("%d",&birth_year);
    age=current_year-birth_year;
    if(age>=18){
        printf("eligible to vote\n");
    }else{
        printf("not eligible to vote\n");
    }printf("Your age is =%d\n",age);
}