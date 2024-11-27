#include<stdio.h>
int main()
{
    int n;
    printf("enter any number : ");
    scanf("%d",&n);

int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);

}
for(int i=0;i<n;i++)
{
printf("%d\t",a[i]);

}
printf("after reversing array");
for(int i=n;i>=0;i--)
{
printf("%d\t",a[i]);

}


return 0;
}