#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("enter the temperature in celsius =");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("Temperature in Fahrenheit  is : %f ",fahrenheit);
}