#include "main.h"

/**
* print_last_digit - Prints and returns last digit
* @n: The number to process
* Return: Value of last digit
*/
int print_last_digit(int n)
{
int last = n % 10;
if (last < 0)
last *= -1;
_putchar(last + '0');
return (last);
}
