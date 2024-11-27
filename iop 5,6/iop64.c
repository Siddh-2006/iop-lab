#include<stdio.h>
int main(){
int a[3][3],total=0;

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
    for (int j= 0; j<3 ; j++)

    {
        total=total+a[i][j];

    }
    printf("SUM OF ROW IS %d\n",total);
    total = 0;    
}



return 0;
}