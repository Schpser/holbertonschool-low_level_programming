#include "main.h"
/**
 * _strpbrk - Found the first match
 * @s: The first string to compare
 * @accept: To choose matches
 * Return: Pointer
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		for (a = accept; *a && *a != *s; a++)
			;
		if (*a)
			return (s);
		s++;
	}
	return ('\0');
}
