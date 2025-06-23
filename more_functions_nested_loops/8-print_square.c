#include "main.h"

/**
 * print_square - Prints n x n square of #
 * @size: Size of the square
 */
void print_square(int size)
{
int line, col;
if (size <= 0)
{
_putchar('\n');
return;
}    
for (line = 0; line < size; line++)
{
for (col = 0; col < size; col++)
{
_putchar('#');
}
_putchar('\n');
}
}
