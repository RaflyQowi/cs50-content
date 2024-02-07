#include <stdio.h>
#include "lib/cs50.h"

int main(void)
{
    FILE *file = fopen("result/phonebook.csv", "a");
    if (file == NULL)
    {
        return 1;
    }

    char *name = get_string("Name: ");
    char *age = get_string("Age: ");
    char *phone_number = get_string("Phone Number: ");

    fprintf(file, "%s,%s,%s\n", name, age, phone_number);

    fclose(file);
}