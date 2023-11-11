#include<stdio.h>
#include<math.h>
int main(){
    float simple_intrest,principle,rate,time;
    printf("enter the principle");
    scanf("%f",&principle);
    printf("enter the rate");
    scanf("%f",&rate);
    printf("enter the time");
    scanf("%f",&time);
    simple_intrest=(principle*rate*time);
    printf("The simple intrest is = %f ",simple_intrest);
}
