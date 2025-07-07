#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string and display the adress of the new one
 * @str: the string to be copied
 * Return: pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	int lengh = 0;
	int i;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[lengh] != '\0')
	{
		lengh++;
	}
	copy = malloc((lengh + 1) * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= lengh; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
