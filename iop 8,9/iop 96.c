#include<stdio.h>
#include<string.h>
struct names{
	char name[20];
};
int main(){
	int n,i=0,k=0,j=0;
	char sortname[n][20];
	printf("enter a number of names wants to enter:");
	scanf("%d",&n);
	struct names *nam[n];
	printf("enter names:\n");
	for(i=0;i<n;i++){
		nam[i]=(struct names*)malloc(sizeof(struct names));
		scanf("%s",nam[i]->name);
	}
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if(strcmp(nam[j]->name,nam[j+1]->name)>=0){
				struct names temp =*nam[j];
			*nam[j]=*nam[j+1];
			*nam[j+1]=temp;
			}
		}
	}
	printf("lexicograpghically sorted names are\n");
	for(i=0;i<n;i++){
		printf("%s\n",nam[i]->name);
	}
	return 0;
}
