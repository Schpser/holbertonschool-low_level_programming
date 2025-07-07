#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings up to n bytes of the second string
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes from s2 to concatenate
 * Return: a pointer to the newly allocated string, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0, len2 = 0, i, j;

	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{

		len2++;
	}
	if (n > len2)
	{
		n = len2;
	}
	result = malloc(len1 + n + 1);
	if (!result)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
