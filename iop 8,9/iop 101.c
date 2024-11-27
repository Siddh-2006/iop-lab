#include<stdio.h>
int main(){
	FILE *fp;
	fp=fopen("LNMIITSTUDENT.DAT","a+");
	if(fp==NULL)printf("file is not opening:error");
	char str[100];
	printf("what you want in file LNMIITSTUDENT:");
	gets(str);
	fprintf(fp,"%s",str);
	fclose(fp);
	return 0;
}
