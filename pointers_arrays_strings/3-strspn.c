#include "main.h"
/**
 * _strspn - To bytes number in a string
 * @s: The string
 * @accept: Authorized char
 * *a - Pointer to go trough 'accept'
 * Return: Success
 */
unsigned int _strspn(char *s, char *accept)
{
	char *a;
	unsigned int n = 0;

	while (*s && (a = accept, 1))
	{
		while (*a && *a != *s)
			a++;
		if (*a)
		{
			n++;
			s++;
		}
		else
		{
			return (n);
		}
	}
	return (n);
}

