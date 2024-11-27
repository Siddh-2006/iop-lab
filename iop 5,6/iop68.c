#include<stdio.h>
int main(){
int a[3][3];
int b[3][3];
int c[3][3];


int sum=0;

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        c[i][j]=0;
    }
    
}


printf("enter A matrix : \n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        scanf("%d", &a[i][j]);
    }

}
printf("enter B matrix : \n");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        scanf("%d", &b[i][j]);
    }

}
printf("A matrix is \n");
for (int i = 0; i < 3; i++)
{  for (int j = 0; j < 3; j++)
{
     printf("%d\t",a[i][j]);
}
printf("\n");
     
}
printf("B matrix is \n");
for (int i = 0; i < 3; i++)
{    for (int j = 0;j < 3; j++)
{
    printf("%d\t",b[i][j]);
}
printf("\n");
}

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j< 3; j++)
    {
       for (int k = 0; k < 3; k++)
       {
        c[i][j]=a[i][k]*b[k][j]+c[i][j];
       }
        
    }
    
}
printf("MULTIPLICATION  matrix is \n");
for (int i = 0; i < 3; i++)
{  for (int j = 0; j < 3; j++)
{
     printf("%d\t",c[i][j]);
}
printf("\n");
}

return 0;
}