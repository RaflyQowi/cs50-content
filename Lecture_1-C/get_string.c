#include "lib/cs50.h"

int main(void)
{
    string answer = get_string("Who are you: ");
    printf("Hey there, %s !!! Happy Coding !!!\n", answer);
}