#include "3-calc.h"
#include <string.h>
#include <stddef.h>
/**
 * get_op_func - Selects the correct function to perform the operation.
 * @s: The operator passed as argument.
 * Return: A pointer to the function that corresponds to the operator,
 * or NULL if not found.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL &&
		   strcmp(s, ops[i].op) != 0)
	{
		i++;
	}

	if (ops[i].op != NULL)
	{
		return (ops[i].f);
	}
	return (NULL);
}
