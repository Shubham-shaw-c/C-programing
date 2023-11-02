#include<stdio.h>
int main(){
    int a,b;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter a number");
    scanf("%d",&b);
    int c=a;
    a=b;
    b=c;
    printf("a is%d\n",a);
    printf("b is%d\n",b);

}