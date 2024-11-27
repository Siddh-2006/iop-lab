#include<stdio.h>
int main(){
    int n;
    printf("enter any number : ");
    scanf("%d",&n);
    int q=n/2;
    
    
for (int i = 0; i <q; i++)
{ 
    
    
    
    for (int j=1;j<=q-i; j++)
{
    printf(" ");
}

    for (int k= 1; k<=2*i-1; k++)
    {
        printf("*");
        
    }
    printf("\n");

}
for (int i = 1; i <=n; i++)
{
    printf("*");
}
printf("\n");
for (int i = q; i>0; i--)
{
        for (int j=1;j<=q-i+1; j++)
{
    printf(" ");
}

    for (int k= 0; k<2*i-1; k++)
    {
        printf("*");
        
    }
    printf("\n");
    
}

return 0;
}
