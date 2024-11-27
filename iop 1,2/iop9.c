#include <stdio.h>

int main() {//firstly we declared the variables
    int hours, minutes, seconds, total_seconds;
//making the user to enter values
    printf("Enter time in hours: ");
    scanf("%d", &hours);

    printf("Enter time in minutes: ");
    scanf("%d", &minutes);

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);
//formula
    total_seconds = hours * 3600 + minutes * 60 + seconds;
//result
    printf("Total seconds: %d", total_seconds);

    return 0;
}