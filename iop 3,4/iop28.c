#include<stdio.h>
int main(){
int num,sum=0,q,temp;

printf("enter any number ");
scanf("%d",&num);
temp=num;
while(num>0)
{
   q= num%10;
    sum=sum+( q*q*q);
   num=num/10 ;
}
if(sum==temp){
    printf("it is armstrong");
}
else{
    printf("it is not armstrong");
}
return 0;
}