#include "main.h"

/**
 * _strncat - Cancatenates 2 strings
 * @src: The source string
 * @dest: Destination of the string
 * @n: Number of bytes
 * Return: Pointer to the resulting string (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
while (*dest)
dest++;
while (n > 0 && *src != '\0')
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
*dest = '\0';
return (ptr);
}
