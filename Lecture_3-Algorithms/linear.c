#include "stdio.h"
#include "lib\cs50.h"

int main(void)
{
    int x[] = {20, 500, 300, 100, 40, 10, 50};

    int n = get_int("Enter a number you want to search: ");
    for (int i = 0; i < 7; i++)
    {
        if (x[i] == n)
        {
            printf("Found number %i at index %i\n", n, i);
            return 0;
        }
    }
    printf("Number %i not found\n", n);
    return 1;
}