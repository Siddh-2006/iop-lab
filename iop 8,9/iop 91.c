#include<stdio.h>
int main(){
	int *ptr,n;
	printf("enter any number:");
	scanf("%d",&n);
	ptr = &n;
	printf("cube = %d, square =%d ",(*ptr)*(*ptr)*(*ptr),(*ptr)*(*ptr));
	return 0;
}
