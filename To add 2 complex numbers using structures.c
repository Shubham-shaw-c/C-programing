#include<stdio.h>
int main(){
    struct complex{
        int real;
        int imaginary;
    }c1,c2,c3;
    printf("enter the first real number \n");
    scanf("%d",&c1.real);
    printf("enter the first imaginary number \n");
    scanf("%d",&c1.imaginary);
    printf("enter the second real number \n");
    scanf("%d",&c2.real);
    printf("enter the second real number \n");
    scanf("%d",&c2.imaginary);
    c3.real=c1.real+c2.real;
    c3.imaginary=c1.imaginary+c2.imaginary;
    printf("The Complex Number is: %d+%di",c3.real,c3.imaginary);
}