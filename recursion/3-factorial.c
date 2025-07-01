#include "main.h"
/**
 * factorial - The product of int unsigned numbers
 * @n: Number to check
 * Return: Result of factorial function
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
