#include<stdio.h>
#include<string.h>
enum color {black = 1, white, blue, yellow, cyan, magenta, silver, lime};
enum color getColor(const char *colorName) {
    if (strcmp(colorName, "black") == 0) {
        return black;
    } else if (strcmp(colorName, "white") == 0) {
        return white;
    } else if (strcmp(colorName, "blue") == 0) {
        return blue;
    } else if (strcmp(colorName, "yellow") == 0) {
        return yellow;
    } else if (strcmp(colorName, "cyan") == 0) {
        return cyan;
    } else if (strcmp(colorName, "magenta") == 0) {
        return magenta;
    } else if (strcmp(colorName, "silver") == 0) {
        return silver;
    } else if (strcmp(colorName, "lime") == 0) {
        return lime;
    } else {
        return 0;
    }
}
int main() {
    char colorName[20];
    printf("Enter a color (black, white, blue, yellow, cyan, magenta, silver, lime): ");
    scanf("%s", colorName);
    enum color num = getColor(colorName);
    switch(num) {
        case black:
            printf("#000000\n");
            break;
        case white:
            printf("#FFFFFF\n");
            break;
        case blue:
            printf("#0000FF\n");
            break;
        case yellow:
            printf("#FFFF00\n");
            break;
        case cyan:
            printf("#00FFFF\n");
            break;
        case magenta:
            printf("#FF00FF\n");
            break;
        case silver:
            printf("#C0C0C0\n");
            break;
        case lime:
            printf("#00FF00\n");
            break;
        default:
            printf("Unknown color\n");
    }

    return 0;
}


