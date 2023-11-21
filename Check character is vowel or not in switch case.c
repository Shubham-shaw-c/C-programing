#include<stdio.h>
int main(){
    char a;
    printf("Enter the character in small letter \n");
    scanf("%c",&a);
    switch(a) {
        case 'a':
            printf("It is A");
            break;
        case 'e':
            printf("It is E");
            break;
        case 'i':
            printf("It is I");
            break;
        case 'o':
            printf("It is O");
            break;
        case 'u':
            printf("It is U");
            break;
        default:
            printf("It is consonant");
    }
}