#include<stdio.h>
int main(){
    float KB,MB,GB,TB;
    printf("enter the size in KB");
    scanf("%f",&KB);
    MB=KB/1000;
    GB=MB/1000;
    TB=GB/1000;
    printf("size in MB %f \n",MB);
    printf("size in GB %f \n",GB);
    printf("size in TB %f \n",TB);
}