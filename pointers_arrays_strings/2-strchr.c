#include "main.h"
#include <stddef.h>
/**
 * *_strchr - To locate a char. in a string
 * @c: character
 * @s: the string
 * Return: Success
 */

char *_strchr(char *s, char c)
{
	while (*s && *s != (char)c)
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
		return ('\0');
}
