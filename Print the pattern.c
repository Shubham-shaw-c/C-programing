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
    int i,j;
    for(i=1;i<=5;i++){
        printf("\n");
        for(j=1;j<=i;j++){
            printf("%c",'A'+1+i);
        }
    }
}