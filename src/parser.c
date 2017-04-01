#include "parser.h"

#include <stdint.h>         // Fixed width integers

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
