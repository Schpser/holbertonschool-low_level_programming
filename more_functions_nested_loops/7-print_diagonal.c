#include "main.h"

/**
 * print_diagonal - Prints a diagonal line
 * @n: Number of \ characters to print
 */
void print_diagonal(int n)
{
int l, s;
if (n <= 0)
{
_putchar('\n');
return;
}
for (l = 0; l < n; l++)
{
for (s = 0; s < l; s++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
