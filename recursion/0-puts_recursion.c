#include "main.h"
/**
 * _puts_recursion - Display a string from "parent" letter
 * @s: The string
 * Return: The string with recursion
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
