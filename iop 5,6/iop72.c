#include <stdio.h>
int main() {
    int n, shift, temp;
    printf("Enter how many numbers you want in the array: ");
    scanf("%d", &n);
    printf("Enter shift value: ");
    scanf("%d", &shift);

    int a[n]; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    while (shift > 0) {
        temp = a[n - 1];
        for (int i = n - 1; i > 0; i--) 
        {
            a[i] = a[i - 1];
        }
        a[0] = temp;
        shift--;
    }

    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    return 0;
}