#ifndef _PARSER_H_
#define _PARSER_H_

#include "list.h"

/*
 * Removing spaces from string
 */
void removeSpaces(char *str);

/*
 * Sprit string to list using delimeter char
 */
list_t *splitString(const char *str, const char delimeter);

#endif // _PARSER_H_
