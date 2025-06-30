#include "main.h"
#include <stddef.h>
/**
 * *_memset - to change specific characters
 * @n: Bytes number
 * @s: Pointer of memory area
 * @b: Constant byte
 * Return: Pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n-- > 0)
{
*ptr++ = b;
}
return (s);
}
