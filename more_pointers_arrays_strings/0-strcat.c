#include "main.h"

/**
 * _strcat - Concatenates  strings
 * @dest: The destination string
 * @src: The source string
 * Return: Pointer to the resulting string (dest)
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (ptr);
}
