#include "main.h"

/**
 * _sqrt_recursion - Computes sqrt recursively
 * @n: Number to check
 * Return: Natural sqrt or -1
 */
int _sqrt_recursion(int n)
{
	static int guess = 1;
	int result;

	if (n < 0)
		return (-1);
	if (guess * guess == n)
	{
		result = guess;
		guess = 1;
		return (result);
	}
	if (guess * guess > n)
	{
		guess = 1;
		return (-1);
	}

	guess++;
	return (_sqrt_recursion(n));
}
