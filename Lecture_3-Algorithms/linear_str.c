#include "stdio.h"
#include "lib\cs50.h"
#include "string.h"

int main(void)
{
    char *x[] = {"fish", "lion", "cat", "tiger", "dog", "elephant", "zebra"};

    string n = get_string("Enter a string you want to search: ");

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(n, x[i]) == 0)
        {
            printf("Found  string %s at index %i\n", n, i);
            return 0;
        }
    }
    printf("String %s not found\n", n);
    return 1;
}