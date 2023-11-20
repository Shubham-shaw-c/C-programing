#include<stdio.h>
int main(){
    float m,s,sst,h,e,avg,a;
    printf("Enter the Maths subject marks =\n");
    scanf("%f",&m);
    printf("Enter the Science subject marks=\n");
    scanf("%f",&s);
    printf("Enter the Social Science subject marks =\n");
    scanf("%f",&sst);
    printf("Enter the Hindi subject marks =\n");
    scanf("%f",&h);
    printf("Enter the English subject marks =\n");
    scanf("%f",&e);
    a=(m+s+sst+h+e);
    avg=a/5;
    printf("Average of all subject marks =%d",(int)avg);
}