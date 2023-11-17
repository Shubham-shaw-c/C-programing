// Created by SHUBHAM on 17-11-2023.
#include<stdio.h>
int main(){
    float marks;
    printf("Enter the marks between the range of 0 to 100\n");
    scanf("%f",&marks);
    if(marks>95&&marks<=100){
        printf("Grade is A++");
    }else if(marks>85&&marks<=95){
        printf("Grade is A+");
    }else if(marks>75&&marks<=85){
        printf("Grade is A");
    }else if(marks>65&&marks<=75){
        printf("Grade is B");
    }else if(marks>55&&marks<=65){
        printf("Grade is C");
    }else if(marks>45&&marks<=55){
        printf("Grade is D");
    }else{
        printf("Fail");
    }
}
