#include <stdio.h>
int main()
{
    int n, a,x;
    printf("enter any number : ");
    scanf("%d", &n);
    a = 2;
    if (n == 1)
    {
        printf("it is not a prime number");
    }
    else
    {
        while (a < n)
        {
            if (n % a == 0)
            {
                printf(" it is not a prime number");
                x=1;
                break;
            }

            a++;
        }
        if(x!=1){
            printf("it is a prime number");
        }
    }
    return 0;
}