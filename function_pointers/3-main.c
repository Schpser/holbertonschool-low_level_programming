#include "function_pointers.h"
#include <stdlib.h>
/**
 * main - Entry point for the simple calculator program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success.
 * 98 if the number of arguments is incorrect.
 * 99 if the operator is invalid.
 * 100 if division or modulo by zero is attempted.
 */
int main(int argc, char *argv[])
{
	char *op_str;
	int (*op_func)(int, int);
	char *error_msg = "Error\n";
	int i_err;
	int num_val_b;

	if (argc != 4)
	{
		for (i_err = 0; error_msg[i_err] != '\0'; i_err++)
			_putchar(error_msg[i_err]);
		exit(98);
	}

	op_str = argv[2];
	op_func = get_op_func(op_str);

	if (op_func == NULL)
	{
		for (i_err = 0; error_msg[i_err] != '\0'; i_err++)
			_putchar(error_msg[i_err]);
		exit(99);
	}

	if ((op_str[0] == '/' || op_str[0] == '%') && op_str[1] == '\0')
	{
		num_val_b = atoi(argv[3]); /* Convert num2 for this check */
		if (num_val_b == 0)
		{
			for (i_err = 0; error_msg[i_err] != '\0'; i_err++)
				_putchar(error_msg[i_err]);
			exit(100);
		}
	}
	return (0);

}
