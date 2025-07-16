#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that performs simple operations.
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 on success, or an error code on failure,
 * 98 if the number of arguments is wrong,
 * 99 if the operator is none of the above,
 * 100 if the user tries to divide (/ or %) by 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	op_func = get_op_func(op);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = op_func(num1, num2);

	printf("%d\n", result);

	return (0);
}
