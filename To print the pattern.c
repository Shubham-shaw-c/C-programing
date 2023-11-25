/* to print the pattern
A
BB
CCC
DDDD
EEEEE
 */

#include<stdio.h>
int main() {
    int size;
    printf("Enter the size to print the pattern\n");
    scanf("%d",&size);
    for (int i = 0; i <=size; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' - 1 + i);
        }
        printf("\n");
    }
}