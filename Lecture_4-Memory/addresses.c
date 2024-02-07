#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    // Gonna print the address of variable n on the memory
    printf("Address of variable n: %p\n", p);

    // Gonna print what value from address
    printf("Value from address:  %i\n", *p);
}