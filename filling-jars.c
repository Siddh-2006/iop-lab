#include <stdio.h>
int main()
{
       int n,m,a,b,k,sum=0;
       printf("enter a number of jars and number of operation to be performed:");
       scanf("%d  %d",&n,&m);
       for(int i=0;i<m;i++)
       {
              scanf("%d  %d  %d",&a,&b,&k);
              for(int j=0;j<(b-a+1);j++)
              {
                     sum+=k;
              }
       }
       printf("%d",sum/n);
       return 0;
}