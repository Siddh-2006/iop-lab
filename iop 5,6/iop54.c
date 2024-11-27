#include<stdio.h>
int main(){
int a[10];
int sum=0;
for (int i = 0; i < 10; i++)
{
    scanf("%d",&a[i]);
}
for (int j = 0; j < 10; j++)
{
    printf("%d \t",a[j]);
}
for (int k = 0; k < 10; k++)
{
    sum=sum+a[k];
}
printf("sum of array is %d",sum);


return 0;
}