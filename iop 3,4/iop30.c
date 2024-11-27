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
//giving reverse of the number
printf("%d is the reverse of %d",r,temp);
return 0;
}