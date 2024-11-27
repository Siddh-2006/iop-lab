#include <stdio.h>
int factorial(int n);

int main()
{
    int n, r, result;
    printf("enter n : ");
    scanf("%d", &n);
    printf("enter r : ");
    scanf("%d", &r);
        result = factorial(n) / (factorial(n - r) * factorial(r));
    printf("ncr of the given number is :%d ", result);
     return 0;
}
int factorial(int n)
{
    if (n==1||n==0)
    {
        return 1;
    }
    return factorial(n-1)*n;
}
