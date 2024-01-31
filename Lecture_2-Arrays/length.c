#include "stdio.h"
#include "lib/cs50.h"

int string_length(string s);

int main(void)
{
    string name = get_string("What's your name? ");

    printf("%i\n", string_length(name));
}

int string_length(string s)
{
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    return n;
}