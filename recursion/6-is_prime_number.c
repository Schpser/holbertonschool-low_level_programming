#include "main.h"

/**
 * is_prime_number - Checks if a number is prime (recursive)
 * @n: Number to check
 * @d: Divisor
 * Return: 1 if prime, 0 if not
 */
#include "main.h"

int is_prime_number(int n)
{
	static int d = 2;

	if (n <= 1)
	{
		d = 2;
		return (0);
	}
	if (d * d > n)
	{
		d = 2;
		return (1);
	}
	if (n % d == 0)
	{
		d = 2;
		return (0);
	}
	d++;
	return (is_prime_number(n));
}
