#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c, s, ar;
    printf("enter the side A=");
    scanf("%f",&a);
    printf("enter the side B=");
    scanf("%f",&b);
    printf("enter the side C=");
    scanf("%f",&c);
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle = %f ",ar);
}
