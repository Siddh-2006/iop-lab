#include<stdio.h>
int main(){
    int n,i,*ptr;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    ptr = arr1;
    printf("enter the elements of the array:\n");
    for( i=0;i<n;i++){
        scanf("%d",&arr1[i]);
        *(arr2 + (n-1-i)) = *(ptr + i);
    }
    printf("its copied array by pointer with opposite order:\n");
    for(i=0;i<n;i++){
        printf("%d \n",arr2[i]);
    }
    return 0;
}
