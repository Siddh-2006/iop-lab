#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter the marks of maths :");
    scanf("%d",&a);
    printf("Enter the marks of science :");
    scanf("%d",&b);
    printf("Enter the marks of english :");
    scanf("%d",&c);
    printf("Enter the marks of hindi : ");
    scanf("%d",&d);
    printf("Enter the marks of social science :");
    scanf("%d",&e);
    printf("the total mrks you got is %d",&a+b+c+d+e);
    printf("the percentage you got is %d",&a+b+c+d+e/500*100);
return 0; 
}