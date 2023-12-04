#include <stdio.h>
int Tree(int n){
    if (n > 0){
        printf("%d\t", n);
        Tree(n - 1);
        Tree(n - 1);
    }
}
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    Tree(n);
}