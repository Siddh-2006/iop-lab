#include <stdio.h>
int main()
{
    printf("enter a number between 1 to 15:");
    int t,n,points;
    scanf("%d",&t);
    int a[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        int c=n;
        points=0;
        while(c!=0)
        {
            int b=c%10;
            if(b==0)
            {
                continue;
            }
            c/=10;
            if(n%b==0)
            {
                points++;
            }
        }
        a[i] = points;
    }
    for(int i=0;i<t;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}