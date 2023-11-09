#include<stdio.h>
#include<math.h>
int main(){
    float compound_intrest,principle,rate,time;
    printf("enter the principle");
    scanf("%f",&principle);
    printf("enter the rate");
    scanf("%f",&rate);
    printf("enter the time");
    scanf("%f",&time);
    compound_intrest=(1+rate/100);
    printf("The compound intrest is = %f ",pow(compound_intrest,time)*principle);
}