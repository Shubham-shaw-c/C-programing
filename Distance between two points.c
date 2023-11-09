#include<stdio.h>
#include<math.h>
int main(){
    int x1, x2, y1, y2, a,b;
    float distance;
    printf("enter X1=");
    scanf("%d",&x1);
    printf("enter X2=");
    scanf("%d",&x2);
    printf("enter Y1=");
    scanf("%d",&y1);
    printf("enter Y2=");
    scanf("%d",&y2);
    a=x2-x1;
    b=y2-y1;
    distance=sqrt(pow(a,2)+pow(b,2));
    printf("Distance between the 2 point = %f ",distance);
}