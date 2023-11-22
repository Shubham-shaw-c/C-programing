#include<stdio.h>
int main(){
    int num,m,a=0;
    printf("Enter the number \n");
    scanf("%d",&num);
    m=num/2;
    for(int i=2;i<=m;i++){
        if(num%i==0){
            printf("%d is not a prime number",num);
            a=1;
            break;
        }
    }if(a==0){
        printf("%d is a prime number", num);
    }
}