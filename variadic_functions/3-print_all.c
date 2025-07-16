#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on a format string.
 * @format: A list of types of arguments passed to the function.
 * 'c' for char, 'i' for integer, 'f' for float, 's' for char *.
 * @...: The variable arguments to be printed.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sep = "";
	char *str_val;

	if (format == NULL)
	{
		printf("\n");
		return;
	}

	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str_val = va_arg(args, char *);
				printf("%s%s", sep, (str_val == NULL ? "(nil)" : str_val));
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
