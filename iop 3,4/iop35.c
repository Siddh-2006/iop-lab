#include<stdio.h>
int main(){
int n,q,sum=0,temp;
printf("enter any number : ");
scanf("%d",&n);
while(n>0){

q=n%10;
sum=sum+q;
n=n/10;
}
if(sum>9){
while(sum>0)
{
    q=sum%10;
    temp=temp+q;
sum=sum/10;
}
printf("%d",temp);
}
else{
    printf("%d",sum);
}
return 0;
}