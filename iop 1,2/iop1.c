#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of principal amount : ");
    scanf("%d", &a);
    printf("Enter the value of rate of interest : ");
    scanf("%d", &b);
    printf("Enter the value of time : ");
    scanf("%d", &c);
    printf("Simple Interest = %d", a * b * c / 100);

    return 0;
}