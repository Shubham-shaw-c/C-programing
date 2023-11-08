#include<stdio.h>
int main(){
    float rupees;
    printf("enter the rupess");
    scanf("%f",&rupees);
    printf("amount in Dollar%f \n",rupees*0.012);
    printf("amount in Dirhams %f \n",rupees*0.044);
    printf("amount in Pound %f \n",rupees*0.0096);
    printf("amount in Taka %f \n",rupees*1.32);
}