#include <stdio.h>



int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
     int a = 0, b = 1, next;

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b; // Calculate the next term
        a = b;        // Update a to the next term
        b = next;     // Update b to the next term
    }
    
    return 0;
}