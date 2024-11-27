#include<stdio.h>
int main(){
    //SELECTION SORT
int n, temp,min;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    for (int i = 0; i <n; i++)
    {
   min=i ;
    for (int j = i+1;j<n; j++)
    {
        if (a[j]<a[min])
        {
            temp=a[j];
            a[j]=a[min];
            a[min]=temp;
        }
        
    }
    
    }
     for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
return 0;
}