#include <stdio.h>
int main()
{
    float a, b, result;
    char operation='+';

    printf("enter any two number:");
    scanf("%f", &a);
      scanf("%f", &b);
    printf("what operation you wants to perform:");
    scanf(" %c",&operation);
    switch (operation)
    {

    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        printf("enter valid operation from(+,-,*/)");
    }
    printf("you result is:%f", result);

    return 0;
}