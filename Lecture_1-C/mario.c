#include "stdio.h"
#include "lib/cs50.h"

int main(void)
{
    int n;
    // Prompt user for positive interger
    do
    {
        n = get_int("Size: ");
    } while (n < 1);

    // Print an for loop for bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}