#include<stdio.h>
void pallindrome(int n);
int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
pallindrome(n);
return 0;
}
void pallindrome(int n)
{int temp=n;
int q,sum=0;
while(n>0)
{q=n%10;
sum=sum*10+q;
n=n/10;
}
if(sum==temp){
    printf("\n entered number is a pallindrome");
}
else{
    printf("\n entered number is not a pallindrome");
}


}