#include<stdio.h>
#include<string.h>
void flip(char n[],int m){
	int i,h=strlen(n);
	char str1[h-m];
	strcpy(str1,n);
	for(i=1;i<m;i++){
		str1[h-i]=n[h-m+i];
	}
	for(i=0;i<h;i++){
		printf("%c",str1[i]);
	}
	return;
}
int main(){
	char n[10];
	int m;
	gets(n);
	scanf("%d",&m);
	flip(n,m+1);
	return 0;
}
