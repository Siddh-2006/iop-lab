#include <stdio.h>
int main()
{   //taking input character from a user
    char c;
    scanf("%c", &c);
    //for capital letter
    if (65 <=c && c<= 90)
    {
        printf("%c is uppercase letter", c);
    }
    //for small letter
    else if (97 <=c && c<= 122)
    {
        printf("%c is lowercase letter", c);
    }
    //for other things
    else
    {
        printf("%c is a digit or a special symbol", c);
    }
        return 0;
    }