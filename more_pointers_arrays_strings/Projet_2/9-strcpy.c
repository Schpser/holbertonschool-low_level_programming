#include "main.h"
/**
 * _strcpy - function that copying the string
 * @src: Source of the value (String)
 * @dest: the destination of the pointer
 * Return: Value of the pointer
 */

char *_strcpy(char *dest, char *src)
{
char *ptr = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (ptr);
}
