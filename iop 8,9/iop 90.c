#include<stdio.h>
int main(){
	char str[100]="my name is siddh";
	char *ptr;
	int i=0,j=0;
	ptr = str;
	while(*(ptr + i)!='\0'){
		if(*(ptr + i)==' '){
			i++;
			continue;
		}
		j++;
		i++;
	}
	printf("size of string including space is:%d\n",i);
	printf("size of string excluding space is:%d",j);
	return 0;
}
