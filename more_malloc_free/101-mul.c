#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _is_digit_string - Checks if a string contains only digits.
 * @s: The string to check.
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int _is_digit_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * _print_string - Prints a string followed by a newline.
 * @s: The string to print.
 */
void _print_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * multiply - Multiplies two positive numbers given as strings.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 * Return: The product, NULL if failure.
 */
char *multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int *result_arr;
	char *final_result;
	int i, j, product, carry;
	int start_index = 0;

	if ((len1 == 1 && num1[0] == '0') || (len2 == 1 && num2[0] == '0'))
	{
		final_result = malloc(2);
		if (!final_result)
			return (NULL);
		final_result[0] = '0';
		final_result[1] = '\0';
		return (final_result);
	}

	result_arr = malloc(sizeof(int) * (len1 + len2));
	if (!result_arr)
		return (NULL);

	for (i = 0; i < len1 + len2; i++)
		result_arr[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + result_arr[i + j + 1] + carry;
			result_arr[i + j + 1] = product % 10;
			carry = product / 10;
		}
		result_arr[i + j + 1] += carry;
	}
	while (start_index < len1 + len2 - 1 && result_arr[start_index] == 0)
		start_index++;
	final_result = malloc(sizeof(char) * (len1 + len2 - start_index + 1));
	if (!final_result)
	{
		free(result_arr);
		return (NULL);
	}

	for (i = start_index; i < len1 + len2; i++)
		final_result[i - start_index] = result_arr[i] + '0';
	final_result[len1 + len2 - start_index] = '\0';

	free(result_arr);
	return (final_result);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *product_str;

	if (argc != 3)
	{
		_print_string("Error");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!_is_digit_string(num1) || !_is_digit_string(num2))
	{
		_print_string("Error");
		exit(98);
	}

	product_str = multiply(num1, num2);

	if (!product_str)
	{
		_print_string("Error");
		exit(98);
	}

	_print_string(product_str);
	free(product_str);
	return (0);
}
