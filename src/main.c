#include <stdio.h>

#include "parser.h"

int main(int argc, char argv[])
{
    char test[] = "Ovo je   test  s t r i n g";

    printf("Before: %s\n", test);
    removeSpaces(test);
    printf("After:  %s\n", test);

    return 0;
}
