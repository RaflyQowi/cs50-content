#include "stdio.h"
// #include "lib/cs50.h"

int main(void)
{
    // Declare and initialize a string using a character array
    char s[] = "HI!";

    // Print the string
    printf("%s\n", s);

    printf("%c %c %c %c\n", s[0], s[1], s[2], s[3]);
    // H I ! NULL

    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
    // 72 73 33 0
}
