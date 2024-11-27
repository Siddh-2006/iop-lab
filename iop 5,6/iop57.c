#include<stdio.h>
int main(){int n;
printf("enter any number : ");
scanf("%d",&n);
int a[n];
int max1=0,max2=0;

for (int i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
for (int j = 0; j < n; j++)
{
    printf("%d \t",a[j]);
}
printf("\n");
for (int k = 0; k<n ;k++)
{
    if(a[k]>max1)
    {
max2=max1;
max1=a[k];
    }

}

printf("THE MAXIMUM NUMBER IS %d",max1);
printf("THE SECOND  MAXIMUM NUMBER IS %d",max2);


return 0;
}