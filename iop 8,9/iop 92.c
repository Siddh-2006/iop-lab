#include<stdio.h>
int main(){
	int i,n;
	printf("enter the number:");
	scanf("%d",&n);
	int *max,e[n];
	printf("enter any numbers :\n");
	for(i=0;i<n;i++){
		scanf("%d",&e[i]);
		if(i==0 || *max<e[i]){
			max = (e+i);
		}
	}
	printf("largest from entered number is %d",*max);
	return 0;
}
