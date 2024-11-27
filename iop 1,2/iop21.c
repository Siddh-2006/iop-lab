#include<stdio.h>
int main(){
int a,b,p;
printf("Enter a number: ");
scanf("%d",&a);
p=1;
while(a>1){
    p = a*p;
    a--;
}
printf("the factorial of the no is %d ",p);
return 0;
}