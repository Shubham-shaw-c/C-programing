#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter a and b");
    scanf("%d%d",&a,b);
    getchar();
    printf("Enter the choice");
    scanf("%d",&c);
    switch(c){
        case 1:
            printf("%d",a+b);
            break;
        default:
            printf("error");
    }

}

