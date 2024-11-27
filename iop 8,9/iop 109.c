#include <stdio.h>
int main() {
    int a = 10;
    int *ptr;   
    ptr = &a;  
    printf("Before modification, a = %d\n", a);
    *ptr = 20;  
    printf("After modification, a = %d\n", a);
    return 0;
}

