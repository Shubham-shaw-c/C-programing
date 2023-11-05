#include<stdio.h>
int main() {
    int side1, side2, side3;
    printf("ente the side one = ");
    scanf("%d", &side1);
    printf("ente the side two = ");
    scanf("%d", &side2);
    printf("ente the side three = ");
    scanf("%d", &side3);
    if ((side1 * side1) + (side2 * side2) == (side3 * side3) || (side1 * side1) + (side3 * side3) == (side2 * side2) ||
        (side2 * side2) + (side3 * side3) == (side1 * side1)) {
        printf("the traingle is right angled triagle");
    } else {
        printf("the triangle is not right angled triangle");
    }
}
