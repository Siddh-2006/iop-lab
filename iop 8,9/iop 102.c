#include<stdio.h>
int main(){
	int line=0,word=0,characters=0;
	FILE *fp;
	fp=fopen("myfile.txt","r");
	if(fp==NULL)printf("file is not opening:error");
	char ch = fp;
	while(ch!=EOF){
		ch=fgetc(fp);
		if(ch==' ')word++;
		if(ch=='\n')line++;
		characters++;
	}
	fflush(fp);
	fclose(fp);
	printf("lines:%d\n",line);
	printf("words:%d\n",word-line+2);
	printf("charcters:%d\n",characters-word-2);
	return 0;
}
