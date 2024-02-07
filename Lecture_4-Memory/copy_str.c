#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "lib/cs50.h"

int main(void)
{
    char *s = get_string("Enter a string: ");

    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;
    }

    strcpy(t, s);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);
    free(t);
    return 0;
}