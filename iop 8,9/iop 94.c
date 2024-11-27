#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	gets(str);
	int revstr[100];
	int n = strlen(str),i;
	char *ptr=str;
	for(i=0;i<n;i++){
		*(revstr + i)=*(str + (n-1-i));
		printf("%c",revstr[i]);
	}	
	return 0;
}
