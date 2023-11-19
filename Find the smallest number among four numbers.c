#include<stdio.h>
int main(){
    int num1,num2,num3,num4;
    printf("Enter the first number in integer =\n");
    scanf("%d",&num1);
    printf("Enter the second number in integer =\n");
    scanf("%d",&num2);
    printf("Enter the third number in integer =\n");
    scanf("%d",&num3);
    printf("Enter the fourth number in integer =\n");
    scanf("%d",&num4);
    if(num1<num2&&num1<num3&&num1<num4){
        printf("%d = num1 is Smallest\n",num1);
    }else if(num2<num1&&num2<num3&&num2<num4){
        printf("%d = num2 is Smallest\n",num2);
    }else if(num3<num1&&num3<num2&&num3<num4){
        printf("%d = num3 is Smallest\n",num3);
    }else if(num4<num1&&num4<num2&&num4<num3){
        printf("%d = num4 is Smallest1\n",num4);
    }else{
        printf("All numbers are equal");
    }
}
