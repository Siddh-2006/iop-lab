#include<stdio.h>
int main(){
int a[4],b[4];
printf("enter any four numbers in ascending order in array A :\n ");
for(int i=0;i<4;i++)
{scanf("%d",&a[i]);}
printf("array A in ascending order : \n");
for (int i = 0; i <4; i++)
{
    printf("%d\t ",a[i]);
}
printf("\n");
printf("enter any four numbers in ascending order in array B :\n ");
for(int i=0;i<4;i++)
{scanf("%d",&b[i]);}
printf("array B in ascending order : \n");
for (int i = 0; i <4; i++)
{
    printf("%d\t ",b[i]);
}
printf("\n");
int c[8];
for(int i=0;i<4;i++)
{
    c[i]=a[i];
}
for(int i=4;i<8;i++)
{
    c[i]=b[i-4];
}
for (int i = 0; i < 7; i++)
{
    if(a[i]>a[i+1]){
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
}
printf("array C in ascending order : \n");
for (int i = 0; i <8; i++)
{
    printf("%d \t",c[i]);
}

return 0;
}