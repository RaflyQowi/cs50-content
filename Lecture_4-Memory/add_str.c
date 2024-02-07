#include <stdio.h>

int main(void)
{
    char *s = "Hello World!";
    printf("Using string literal: %s\n", s);

    printf("Using array Indexing: ");
    for (int i = 0; i < 12; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

    printf("Using pointer Arithmetic: ");
    for (int i = 0; i < 12; i++)
    {
        printf("%c", *(s + i));
    }
    printf("\n");
}