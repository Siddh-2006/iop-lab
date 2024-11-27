#include <stdio.h>
int main()
{
    int n;
    printf("enter any number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {

            printf("%d", k);
        }
        if (i == 1)
        {
            
        }
        else
        {
            for (int p = i-1; p >= 1; p--)
            {
                printf("%d", p);
            }
        }
        printf("\n");
    }

    return 0;
}