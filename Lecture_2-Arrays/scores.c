#include "stdio.h"
#include "lib/cs50.h"

// Constant
const int N = 3;

// Prototype
float average(int length, int array[]);

// Define main
int main(void)
{
    // Get scores
    int scores[N];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Enter score: ");
    }

    // Print average
    printf("Average: %f\n", average(N, scores));
}

float average(int length, int array[])
{
    // Calculate average
    int total = 0;
    for (int i = 0; i < length; i++)
    {
        total += array[i];
    }

    return total / (float)length;
}