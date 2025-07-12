#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* is_digit - Checks if string contains only digits
* @s: String to check
* Return: 1 if only digits, 0 otherwise
*/
int is_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
* multiply - Multiplies two big number strings
* @num1: First number string
* @num2: Second number string
* Return: Result string
*/
char *multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int *result = calloc(len1 + len2, sizeof(int));
	char *final;
	int i, j, sum;

	/* Multiplication algorithm */
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			sum = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1];
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}

	/* Convert to string */
	final = malloc(len1 + len2 + 1);
	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;

	if (i == len1 + len2)
	{
		final[0] = '0';
		final[1] = '\0';
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

/**
* main - Entry point
* @argc: Argument count
* @argv: Argument array
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
	char *res;
	int i;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		/* Error message using _putchar */
		char *err = "Error\n";

		for (i = 0; err[i]; i++)
			_putchar(err[i]);
		return (98);
	}

	res = multiply(argv[1], argv[2]);
	for (i = 0; res[i]; i++)
		_putchar(res[i]);
	_putchar('\n');

	free(res);
	return (0);
}

