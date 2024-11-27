#include<stdio.h>
int main(){
    int p,n;
    
printf("enter numbers you want in array : ");
scanf("%d",&n);
printf("enter number you want to find in array : ");
scanf("%d",&p);
int a[n];
for (int i = 0; i <n; i++)
{
    scanf("%d",&a[i]);
}
printf("\n");
for (int i = 0; i <n; i++)
{
    printf("%d\t",a[i]);
}
printf("\n");

for (int i = 0; i < n; i++)
{
    if(a[i]==p){
        printf("%d is element no %d in the array\n",p,i+1);
    }
}
return 0;
}
