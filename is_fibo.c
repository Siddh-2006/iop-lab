#include<stdio.h>
int main()
{
    int t;
    printf("enter number for checking fibo:");
    scanf("%d",&t);
    int a[t];
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int b=0,c=1,d;
        for(int j=0;j<100;j++)
        {
            d=b+c;
            if(d>n)
            {
                a[i]=0;
                break;
            }
            if(d==n)
            {
                a[i]=1;
                break;
            }
            b=c;
            c=d;
        }
    }
    for(int i=0;i<t;i++)
    {
        if(a[i]==1)
        printf("its fibo\n");
        
        else
        printf("its not fibo\n");
    }
    return 0;
}