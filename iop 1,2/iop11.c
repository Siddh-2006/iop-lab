#include <stdio.h>

int main()
{ // introducing variables
    int total_seconds, hours, minutes, seconds;
    // taking seconds as input
    printf(" Enter total seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60; // hour ma je reminder aavyo ene 60 saathe divide karyu
    seconds = (total_seconds % 3600) % 60; // minute ma je reminder aavyo ene 60 saathe divide karyu
    // printing result
    printf("Time: %d hours, %d minutes, %d seconds", hours, minutes, seconds);

    return 0;
}