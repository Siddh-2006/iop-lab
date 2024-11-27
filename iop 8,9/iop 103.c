#include<stdio.h>
#define max(a,b) (((a)<(b)) ? (b) : (a))
int main(){
	int a,b;
	printf("enter any two numbers:");
	scanf("%d %d",&a,&b);
	printf("max value from these two is :%d",max(a,b));
	return 0;
}
