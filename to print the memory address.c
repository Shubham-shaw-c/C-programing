#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter the A\n");
    scanf("%d",&a);
    printf("Enter the B\n");
    scanf("%d",&b);
    printf("Enter the C\n");
    scanf("%d",&c);
    printf("Enter the D\n");
    scanf("%d",&d);
    printf("Enter the E\n");
    scanf("%d",&e);
    printf("Address of A ,a=%d %p\n",a,&a);
    printf("Adress of B, b=%d %p\n",b,&b);
    printf("Address of C, c=%c %p\n",c,&c);
    printf("Adress of D, d=%d %p\n",d,&d);
    printf("Adress of E, e=%d %p\n",e,&e);
}
