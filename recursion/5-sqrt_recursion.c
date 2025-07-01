#include "main.h"

/**
 * sqrt_helper - Helper function for binary search
 * @n: Original number
 * @min: Minimum range
 * @max: Maximum range
 * Return: Natural square root or -1
 */
int sqrt_helper(int n, int min, int max)
{
	int mid;
	long square;

	if (min > max)
		return (-1);

	mid = (min + max) / 2;
	square = (long)mid * mid;

	if (square == n)
		return (mid);
	if (square < n)
		return (sqrt_helper(n, mid + 1, max));
	return (sqrt_helper(n, min, mid - 1));
}

/**
 * _sqrt_recursion - Returns natural square root
 * @n: Number to calculate
 * Return: Result or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_helper(n, 1, n));
}
