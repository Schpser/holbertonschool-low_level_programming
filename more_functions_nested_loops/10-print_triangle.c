#include "main.h"

/**
 * print_triangle - Prints a triangle of '#' characters
 * @size: Size of the triangle
 */
void print_triangle(int size)
{
int l, e, h;
if (size <= 0)
{
_putchar('\n');
return;
}
for (l = 1; l <= size; l++)
{
for (e = size - l; e > 0; e--)
{
_putchar(' ');
}
for (h = 1; h <= l; h++)
{
_putchar('#');
}
_putchar('\n');
}
}
