#include<stdio.h>
int main(){
int n,r=0,k,temp;
//input the number
printf("enter an integer : ");
scanf("%d",&n);
temp=n;
//reversing the number
while(n>0){
k=n%10;
r=r*10+k;
n=n/10;

}
//checking whether it is a pallindrome or not
if(temp==r){
    printf("%d is a pallindrome \n",temp);
}else{
    printf("%d is not  a pallindrome \n",temp);
}
return 0;
}