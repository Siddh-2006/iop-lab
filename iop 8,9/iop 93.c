#include<stdio.h>
int main(){
	char str[100]="my name is siddh and you can call me bro";
	char *ptr;
	int i=0,j=0;
	ptr = str;
	while(*(ptr + i)!='\0'){
		if(*(ptr + i)==' '){
			i++;
			j++;
			while(*(ptr + i)==' '){
				i++;
			}
		}
		i++;
	}

	printf("number of words in string is :%d",j+1);
	return 0;
}
