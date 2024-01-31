#include <stdio.h>
#include "lib/cs50.h"
#include <string.h>

int main(void)
{
    string name = get_string("Input: ");
    int length = strlen(name);

    printf("Output length: %i\n", length);
}
