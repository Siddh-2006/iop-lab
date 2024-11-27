#include<stdio.h>
#include <stdlib.h>
int n;
struct employee{
	char name[20];
	int number;
	int salary;
};
int main(){
	int i=0;
	printf("what number of employee's are there: ");
	scanf("%d",&n);
	struct employee *ptr[n];
	for(i=0;i<n;i++){
		ptr[i] = (struct employee*)malloc(sizeof(struct employee));
		printf("enter the name of employee\t");
		scanf("%s",ptr[i]->name);
		printf("enter the number of employee\t");
		scanf("%d",&ptr[i]->number);
		printf("enter the salary of employee\t");
		scanf("%d",&ptr[i]->salary);
		printf("\n");
	}
	for(i=0;i<n;i++){
		printf("%s has salary of $%d/-\n",ptr[i]->name,ptr[i]->salary);
	}
	return 0;
}
