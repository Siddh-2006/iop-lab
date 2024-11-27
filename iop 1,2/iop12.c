#include <stdio.h>
int main()
{//taking character input
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    // typecasting character value integer value will give us ascii code of that character
    //thus printing results
    printf("The ASCII value of %c is %d", c, c);

    return 0;
}