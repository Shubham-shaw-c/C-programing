#include<stdio.h>
int SUM(int a){
    int sum=0;
    for(a;a>0;a--){
        sum=sum+a;
    }printf("sum is : %d \n",sum);
}
int main(){
    int a;
    printf("enter any number");
    scanf("%d",&a);
    SUM(a);

}