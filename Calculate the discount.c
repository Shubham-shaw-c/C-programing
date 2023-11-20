/*write a programe in c to calculate the discount by taking the price of the product as a input
 from the user if the discount is greater than 10% but less than 50%, 18% GST is added to the
 bill and if it is more than 50% but less than 100%, 2% GST will be applied ? */



#include<stdio.h>
int main(){
    float amount,discount;
    printf("Enter the amount\n");
    scanf("%f",&amount);
    printf("Enter the Discount\n");
    scanf("%f",&discount);
    if(discount>=0&&discount<=50){
         float bill=(amount*(discount/100))+(18/100);
        printf("Bill =%f",bill);
    }else if(discount>=50&&discount<=100){
        float bill=(amount*(discount/100))+(2/100);
        printf("Bill =%f",bill);
    }else{
        printf("ERROR");
    }

}

