#include<stdio.h>
int main(){
    int n,i,*ptr;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    ptr=arr1;
    for( i=0;i<n;i++){
        scanf("%d",&arr1[i]);
        *(arr1+i)=*(arr2+i);
    }
    for(i=0;i<n;i++){
        printf("%d",arr2[i]);
    }
    return 0;
}