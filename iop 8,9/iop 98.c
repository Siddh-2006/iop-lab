#include<stdio.h>
#include<stdlib.h>
int main(){
	int order,i,j,k;
	printf("enter the order of array:");
	scanf("%d",&order);
	int **arr1=(int **)calloc(order,sizeof(int*));
	int **arr2=(int **)calloc(order,sizeof(int*));
	int **arr3=(int **)calloc(order,sizeof(int*));
	for (i = 0; i < order; i++) {
        arr1[i] = (int *)calloc(order, sizeof(int));
        arr2[i] = (int *)calloc(order, sizeof(int));
        arr3[i] = (int *)calloc(order, sizeof(int));
        if (arr1[i] == NULL || arr2[i] == NULL || arr3[i] == NULL) {
            printf("Memory allocation for rows failed!\n");
            return -1;
        }
    }
printf("enter the elements of 1st array:\n");
	for(i=0;i<order;i++){
		for(j=0;j<order;j++){
			scanf("%d",&*(*(arr1+i)+j));
		}
	}
printf("enter the elements of 2nd array:\n");		
	for(i=0;i<order;i++){
     	for(j=0;j<order;j++){
			scanf("%d",&*(*(arr2+i)+j));
		}
	}
	for(i=0;i<order;i++){
		for(j=0;j<order;j++){
			for(k=0;k<order;k++){
				*(*(arr3+i)+j) += *(*(arr1+i)+k) * *(*(arr2+k)+j);
			}
		}
	}
	printf("your multiplied array:\n");
	for(i=0;i<order;i++){
     	for(j=0;j<order;j++){
			printf("%d \t",*(*(arr3+i)+j));
		}
		printf("\n");
	}
	for (i = 0; i < order; i++) {
        free(arr1[i]);
        free(arr2[i]);
        free(arr3[i]);
    }
    free(arr1);
    free(arr2);
    free(arr3);
	return 0;
}
