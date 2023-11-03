#include<stdio.h>
int main(){
    int slope,coordinate,constant,a,z;
    printf("enter the slope");
    scanf("%d",&slope);
    printf("enter the coordinate");
    scanf("%d",&coordinate);
    printf("enter the constant");
    scanf("%d",&constant);
    printf("enter the value of a");
    scanf("%d",&a);
    z=(slope*coordinate)+constant;
    z!=a? printf("the line is not straight"):printf("the line is straight");

}
