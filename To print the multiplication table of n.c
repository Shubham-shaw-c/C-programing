#include<stdio.h>
int main(){
    int n ;
    printf("Enter the digit you want to print the multiplication\n");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        //for(int j=1;j<=i;j--){
        printf("%d*%d=%d\n",n,i,i*n);
        }
    printf("-------n");
}