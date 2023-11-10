#include<stdio.h>
int AREA(float radius){
    float pie= 3.14;
    printf("area of a circle is %f\n",radius*radius*pie);
    int a;
    printf("enter the radius or enter 0 to stop the programe");
    scanf("%d",&a);
    if(a!=0){
        printf("enter the radius\n");
        scanf("%f",&radius);
        AREA(radius);
    }
    else
        printf("end");

}
int main(){
    float radius;
    printf("enter the radius");
    scanf("%f",&radius);
    AREA(radius);
}