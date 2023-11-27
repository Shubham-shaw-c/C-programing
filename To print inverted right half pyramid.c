#include <stdio.h>
int main(){
    int row;
    printf("Enter the size to print the pattern \n");
    scanf("%d",&row);
    for (int i = 0; i < row; i++){
        for (int j = 0; j < row- i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}