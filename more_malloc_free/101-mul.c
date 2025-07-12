#include "main.h"
#include <stdlib.h>

/**
* print_number - Prints an integer using _putchar
* @n: The integer to print
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}

/**
* main - Multiplies two positive numbers
* @argc: Number of arguments
* @argv: Array of arguments
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
	int i, j;
	long num1, num2;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}

	for (i = 1; i < 3; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				_putchar('E');
				_putchar('r');
				_putchar('r');
				_putchar('o');
				_putchar('r');
				_putchar('\n');
				return (98);
			}
		}
	}

	num1 = atol(argv[1]);
	num2 = atol(argv[2]);
	print_number(num1 * num2);
	_putchar('\n');

	return (0);
}

