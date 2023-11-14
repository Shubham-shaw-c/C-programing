#include<stdio.h>
int main(){
    int side1,side2,area;
    printf("Enter side1=");
    scanf("%d",&side1);
    printf("Enter side2=");
    scanf("%d",&side2);
    area=side1*side2;
    if(side1==side2){
        printf("It is a square\n");
        printf("Area of square %d \n",area);
    }else{
        printf("It is a rectangle\n");
        printf("Area of rectangle %d\n",area);
    }
}

