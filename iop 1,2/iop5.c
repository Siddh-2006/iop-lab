#include <stdio.h>
int main()
{
    // to swap two numbers
    int a = 10, b = 20;
    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("after swapping");
    // swap using third variable
    int c = a;
    a = b;
    b = c;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}