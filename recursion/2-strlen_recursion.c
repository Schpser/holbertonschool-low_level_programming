#include "main.h"

/**
 * _strlen_recursion - To calculate a sring's lenght with recursion
 * @s: The string
 * Return: String's lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
