#include<stdio.h>
int main() {
    int num1, num2,sum1=0,sum2=0;
    printf("Enter the first number in integer\n");
    scanf("%d", &num1);
    printf("Enter the second number in integer\n");
    scanf("%d", &num2);
    for(int i=1;i<num1;i++){
        if(num1%i==0){
           sum1=sum1+i;
        }
    }for(int i=1;i<num2;i++){
        if (num2% i == 0) {
            sum2 = sum2 +i;
        }
    }if((num1==sum2)&&(num2==sum1)){
        printf("%d and %d is amicable number\n",num1,num2);
    }else{
        printf("%d and %d is not amicable number\n",num1,num2);
    }
}