#include "main.h"
#include "101-main.c"
#include <stdlib.h>
#include <string.h>

/**
 * is_digit - Checks if a string contains only digits
 * @s: The string to check
 * Return: 1 if true, 0 if false
 */

int is_digit(char *s)
{
	while (*s)
		if (*s < '0' || *s > '9')
		return (0);

		else
		s++;
	return (1);
}

/**
 * multiply - Multiplies two numbers represented as strings
 * @num1: The first number as a string
 * @num2: The second number as a string
 * Return: The result of the multiplication as a string, or NULL on failure
 */

char *multiply(char *num1, char *num2)
{
	int len1 = strlen(num1), len2 = strlen(num2);
	int *result = calloc(len1 + len2, sizeof(int));
	char *final;
	int i, j, sum;

	if (!result)
	return (NULL);

	for (i = len1 - 1; i >= 0; i--)
		for (j = len2 - 1; j >= 0; j--)
			sum = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1],
			result[i + j + 1] = sum % 10,
			result[i + j] += sum / 10;

	for (i = 0; i < len1 + len2 && result[i] == 0; i++)
	final = malloc(len1 + len2 + 1);

	if (!final)
	free(result);
	return (NULL);

	if (i == len1 + len2)
	{
		final[0] = '0', final[1] = '\0';
		free(result);
		return (final);
	}
	else
	{
		for (j = 0; i < len1 + len2; i++, j++)
			final[j] = result[i] + '0';
		final[j] = '\0';
	}
	free(result);
	return (final);
}
