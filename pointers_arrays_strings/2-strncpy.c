#include "main.h"
/**
 * _strncpy - Copies at most n characters from src to dest
 * @dest: Destination buffer
 * @src: Source string
 * @n: Maximum number of characters to copy
 * Return: Pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;
while (n > 0 && *src != '\0')
{
*dest = *src;
dest++;
src++;
n--;
}
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}
return (ptr);
}

