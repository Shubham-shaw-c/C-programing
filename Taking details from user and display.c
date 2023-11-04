#include<stdio.h>
int main(){
    char name,program,mail_id;
    int Birth_year,Current_year;
    printf("Enter the Name\n");
    scanf("%c",&name);
    printf("Enter the Birth year\n");
    scanf("%d",&Birth_year);
    printf("Enter the Program\n");
    scanf("%c",&program);
    printf("Enter the mail Id\n");
    scanf("%c",&mail_id);
    printf("Enter the Current year\n");
    scanf("%d",&Current_year);
    printf("User age is = %d ",Current_year-Birth_year);
}