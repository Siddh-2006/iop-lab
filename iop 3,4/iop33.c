#include <stdio.h>

int main()
{
    int n, num, max, min;
    printf("How many numbers do you want to input? : ");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("Enter at least two numbers");
    }
    else
    {
        printf("Enter %d numbers\n", n);
        printf("Enter number 1 : ");
        scanf("%d", &min); // Initialize min with the first number
        max = min;         // Initialize max with the first number
        for (int i = 2; i <= n; i++)
        {
            printf("Enter number %d : ", i);
            scanf("%d", &num);
            if (num > max)
            {
                max = num;
            }
            else if (num < min)
            {
                min = num;
            }
        }
        printf("Maximum : %d \n", max);
        printf("Minimum : %d \n", min);
    }
    return 0;
}