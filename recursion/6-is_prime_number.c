#include "main.h"

/**
 * is_divisible - Checks if a number is divisible
 * @n: Number to check
 * @div: Current divisor
 * Return: 1 if prime, 0 otherwise
 */
int is_divisible(int n, int div)
{
	if (div * div > n)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_divisible(n, div + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: Number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_divisible(n, 2));
}
