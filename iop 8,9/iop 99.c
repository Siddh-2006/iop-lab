#include<stdio.h>
#include<stdlib.h>
int main(){
	int count=0;
	FILE *fp;
	fp =fopen("mytext.txt","r");
	    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

	char ch=fgetc(fp);
	while(ch!= EOF){
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
		   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
		   	count++;
		   }
		   ch=fgetc(fp);
	}
	fclose(fp);
	printf("vowels : %d",count);
	return 0;
}
