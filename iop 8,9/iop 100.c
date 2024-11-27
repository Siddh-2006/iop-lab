#include<stdio.h>
int main(){
	int n,i;
	FILE *fp;
	fp=fopen("LNMIITSTUDENT.JAVA","a+");
	if(fp==NULL)printf("file is not opening:error");
	fprintf(fp,"\n\n\n");
	printf("how many students are there:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("NAME: ");
		char str[20];
		scanf("%s",str);
		fprintf(fp,"%d . NAME : %s \n",i+1,str);
		printf("ROLL_NO.: ");
		int num;
		scanf("%d",&num);
		fprintf(fp,"   ROLL_NO.: %d \n",num);
		printf("TOTAL MARKS: ");
		int marks;
		scanf("%d",&marks);
		fprintf(fp,"   MARKS: %d \n",marks);
		fprintf(fp,"\n");
	}
	fclose(fp);
	return 0;
}
