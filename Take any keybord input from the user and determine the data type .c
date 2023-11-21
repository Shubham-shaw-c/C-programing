#include<stdio.h>
#include<ctype.h>
int main(){
    char a;
    int p,q,r,s;
    printf("Enter a character\n");
    scanf("%c",&a);
    p=isdigit(a);
    q= isalpha(a);
    r= ispunct(a);
    s=isspace(a);
    if(p==1){
        printf("The character %c entered is a digit",a);
    }else if(q==1) {
        printf("The character %c entered is a alphabet",a);
    }else if(r==1) {
        printf("The character %c entered is a puntuation character", a);
    }else if(s==1) {
        printf("The character %c entered is a space", a);
    }else{
        printf("Wrong choice !");
    }

}