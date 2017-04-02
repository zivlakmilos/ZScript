#include "parser.h"

#include <stdint.h>         // Fixed width integers
#include <stdlib.h>         // Standard library (memmory)
#include <string.h>         // Work with strings

void removeSpaces(char *str)
{
    while(*str != '\0')
    {
        uint8_t i;
        for(i = 0; *(str + i) == ' '; i++);

        if(i > 0)
        {
            uint8_t j;
            for(j = 0; *(str + j + i) != '\0'; j++)
                *(str + j) = *(str + j + i);
            *(str + j) = '\0';
        }

        str++;
    }
}

list_t *splitString(const char *str, const char delimeter)
{
    uint8_t i;
    int16_t start = -1;
    list_t *list = NULL;

    i = 0;
    while(1)
    {
        if(*(str + i) != delimeter && start < 0)
        {
            start = i;
        } else if((*(str + i) == delimeter || *(str + i) == '\0') && start >= 0)
        {
            uint8_t size = i - start;
            char *data = malloc(size + 1);
            memcpy(data, str + start, size);
            *(data + size) = '\0';
            list = LIST_insert(list, (void *)data);
            start = -1;
        }

        if(*(str + i) == '\0')
            break;

        i++;
    }

    return list;
}
