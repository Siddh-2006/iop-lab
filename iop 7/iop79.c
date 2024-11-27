#include<stdio.h>
void swap( int a,int b);
int main(){
int a,b;
printf("enter number 1 : ");
scanf("%d",&a);
printf("enter number 2 : ");
scanf("%d",&b);
printf("before swapping : \n");
printf("number 1 : %d\n",a);
printf("number 2 : %d\n",b);

swap(a,b);


}
void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("after swapping : \n");
printf("number 1 : %d\n",a);
printf("number 2 : %d\n",b);

}