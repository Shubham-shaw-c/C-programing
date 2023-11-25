/* To print the pattern
A
AB
ABC
ABCD
ABCDE
ABCDEF
*/

#include<stdio.h>
int main(){
    int size;
    printf("Enter the size to print the pattern but size must smaller than 26 \n");
    scanf("%d",&size);
    for(int i=1;i<=size;i++){
        printf("\n");
        for(int j=1;j<=i;j++){
            printf("%c",'A'+j-1);
        }
    }
}