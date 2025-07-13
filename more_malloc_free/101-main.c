#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument array
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *res = NULL;
	int i;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		char err[] = "Error\n";
		for (i = 0; err[i]; i++)
			_putchar(err[i]);
		return (98);
	}

	res = multiply(argv[1], argv[2]);
	if (!res)
	{
		char err[] = "Error\n";
		for (i = 0; err[i]; i++)
			_putchar(err[i]);
		free(res);}
		return (98);

	for (i = 0; res[i]; i++)
		_putchar(res[i]);
	_putchar('\n');

	res = NULL;
	return (0);
}
