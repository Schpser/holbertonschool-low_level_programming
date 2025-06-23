#include "main.h"

/**
 * print_line - to print characters to draw a line
 * @n: number of _
 */

void print_line(int n)
{
int l;
if (n <= 0)
{
_putchar('\n');
return;
}
for (l = 0; l < n; l++)
{
_putchar('_');
}
_putchar('\n');
}
