#include<stdio.h>
int main(){
int a[10],b[10],c[10];
printf("enter array 1: ");


for (int i = 0; i <10; i++)
{
    scanf("%d",&a[i]);

}

for (int i = 0; i <10; i++)
{
    printf("%d\t",a[i]);
    
}

printf("\nenter array 2: ");


for (int i = 0; i <10; i++)
{
    scanf("%d",&b[i]);

}

for (int i = 0; i <10; i++)
{
    printf("%d\t",b[i]);
    
}

printf("\n sum of array is : ");
for (int i = 0; i <10; i++)
{c[i]=a[i]+b[i];
    printf("%d\t",c[i]);
    
}















return 0;
}