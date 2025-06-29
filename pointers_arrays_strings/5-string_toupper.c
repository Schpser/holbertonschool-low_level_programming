#include "main.h"
#include <ctype.h>
/**
 * *string_toupper - To convert characters
 * str - String to be converted
 * Return: str
 */

char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
str[i] = toupper(str[i]);
}
return (str);
}
