#include "cs50.h"

int main(void)
{
    int x = get_int("What the input for x: ");
    int y = get_int("What the input for y: ");

    if (x > y)
    {
        printf("x is greater than y\n");
    }
    else if (x < y)
    {
        printf("x is less than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}