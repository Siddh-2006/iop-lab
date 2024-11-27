#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("enter a number bwt 1 and 1 lakh: ");
    scanf("%d",&n);
    char w[n][100];

    for(int i=0 ; i<=n ; i++)
       {
         gets(w[i]);
       }
       for(int i=0;i<=n;i++)
       {
        int a=strlen(w[i]);
        for(int k=0;k<a;k++)
        {
        for(int j=0;j<a;j++)
        {
            if((a-j)==1)
            {
                printf("no answer\n");
                j+=a;
                k+=a;
            }
            if((int) w[i][a-k-1] > (int)w[i][a-j-2])
            {
                char c=w[i][a-k-1];
                w[i][a-k-1] = w[i][a-j-2];
                w[i][a-j-2] = c;
                puts(w[i]);
                j+=a;
                k+=a;
            }
        }
        }
       }
return 0;
}