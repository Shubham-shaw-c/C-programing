#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character =");
    scanf("%c",&ch);
    if(ch>=65&&ch<95){
        printf("Upper case");
    }else{
        printf("Lower case");
    }
}

