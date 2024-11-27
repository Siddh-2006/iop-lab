#include<stdio.h>
void armstrong(int n);
int main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);
armstrong(n);
return 0;
}
void armstrong(int n)
{int q,sum=0,temp;
temp=n;
while(n>0)
{
    q=n%10;
    sum=sum+q*q*q;
    n=n/10;
}
if(temp==sum)
{
printf("\n entered number is a armstrong number");

}
else
{
printf("entered number is not a armstrong number");
}

}