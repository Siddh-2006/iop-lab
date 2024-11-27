#include<stdio.h>
int main(){
int a[3][3],max=-2147483647,min=2147483647;

printf("enter a 3*3 matrix : \n");
for (int i = 0; i <3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        scanf("%d",&a[i][j]);
    }
    
}
printf(" 3*3 matrix : \n");
for (int i = 0; i <3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
for (int i = 0; i <3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        if(a[i][j]>max){
       max= a[i][j];
        
        }
    }
    
}

printf("%d",max);
for (int i = 0; i <3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        if(a[i][j]<min){
       min= a[i][j];
        
        }
    }
    
}

printf("THE ELEMENT WITH MAXIMUM VALUE IS %d\n",max);
printf("THE ELEMENT WITH MINIMUM VALUE IS %d",min);

return 0;
}