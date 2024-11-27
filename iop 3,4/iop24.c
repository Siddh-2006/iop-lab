#include<stdio.h>
int main(){
    int a,b,c,g;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    g=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("The greatest number is：%d",g);
return 0;
}