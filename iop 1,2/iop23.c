#include<stdio.h>
int main(){
int a,n;
a=1;
printf("enter any number : ");
scanf("%d",&n);
while(a<11){
printf(" %d * %d = %d         \n    ",n,a,n*a);
a++;

}
return 0;
}