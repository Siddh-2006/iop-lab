#include <stdio.h>
int main()
{   //taking input from user
    int a, b, c;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("Enter the value of c:");
    scanf("%d", &c);
    //checking condition for a to be the greatest number
    if (a > b && a > c)
    {
        printf("%d is the largest number", a);
    }
    //checking condition for b to be a greatest number
    else if (b > a && b > c)
    {
        printf("%d is the largest number", b);
    }
    //if both the condition is false then eventually c would be the greatest number
    else
    {
        printf("%d is the largest number", c);
    }

    return 0;
}