#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc >= 2)
    {
        printf("Hello,");
        for (int i = 1; i < argc; i++)
        {
            printf(" %s", argv[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Hello, World\n");
    }
}