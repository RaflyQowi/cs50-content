#include "stdio.h"
#include "string.h"
#include "lib/cs50.h"

typedef struct
{
    char *name;
    char *number;
} person;

int main(void)
{
    person people[3];

    people[0].name = "John";
    people[0].number = "123-456-7890";

    people[1].name = "Jane";
    people[1].number = "987-654-3210";

    people[2].name = "Joe";
    people[2].number = "555-555-5555";

    string search = get_string("Name to search for: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, search) == 0)
        {
            printf("Found their phone number: %s\n", people[i].number);
            return 0;
        }
    }
    printf("No phones number found\n");
    return 1;
}