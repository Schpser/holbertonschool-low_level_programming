#include "main.h"
/**
 * _puts_recursion - Display a string from "parent" letter
 * @s: The string
 * Return: The string in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
