#include "main.h"
/**
 * _puts - Prints a string to stdout followed by a new line
 * @str: Pointer to the string to print
 *
 * putchar. Ends with a new line.
 * Return: void
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
