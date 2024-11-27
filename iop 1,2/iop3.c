#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the salary from job:");
    scanf("%d", &a);
    printf("Enter the salary from gov");
    scanf("%d", &b);
    printf("Enter the salary from other job");
    scanf("%d", &c);
    printf("Total salary is %d", a + b + c);

    return 0;
}