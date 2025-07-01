#include "main.h"

/**
 * _sqrt_recursion - Computes sqrt recursively
 * @n: Number to check
 * Return: Natural sqrt or -1
 */
int _sqrt_recursion(int n)
{
	static int temp = 1;
	int result;

	if (n < 0)
		return (-1);
	if (temp * temp == n)
	{
		result = temp;
		temp = 1;
		return (result);
	}
	if (temp * temp > n)
	{
		temp = 1;
		return (-1);
	}

	temp++;
	return (_sqrt_recursion(n));
}
