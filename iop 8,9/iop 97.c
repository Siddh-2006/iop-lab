#include<stdio.h>
#include<string.h>
int main(){
	int count=0,i;
	char ptr[100];
	gets(ptr);
	int n=strlen(ptr);
	for(i=0;i<n;i++){
		if(*(ptr+i)=='a'||*(ptr+i)=='e'||*(ptr+i)=='i'||*(ptr+i)=='o'||*(ptr+i)=='u'||
		   *(ptr+i)=='A'||*(ptr+i)=='E'||*(ptr+i)=='I'||*(ptr+i)=='O'||*(ptr+i)=='U'){
			count++;
		}
	}
	printf("the string has %d vowels.",count);
	return 0;
}
