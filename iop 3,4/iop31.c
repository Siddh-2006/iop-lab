#include<stdio.h>
int main(){
int n,q,p=0;
printf("Enter a number: ");
scanf("%d",&n);
while (n>0 )
{
  q=  n%10;
 n=n/10;
p=p+q;
}
printf("Sum of digits is %d",p);

return 0;
}