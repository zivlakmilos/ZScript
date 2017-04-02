#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "parser.h"
#include "list.h"

int main(int argc, char argv[])
{
    char test[] = "Ovo je   test  s t r i n g";

    //printf("Before: %s\n", test);
    //removeSpaces(test);
    //printf("After:  %s\n", test);

    printf("Before: %s\n", test);
    list_t *list = splitString(test, ' ');

    while(list != NULL)
    {
        char *data = (char *)list->data;
        printf("%s\n", data);
        list = list->next;
    }

    LIST_clean(list);

    return 0;
}
