#include "main.h"
#include <stdio.h>
/**
 * print_array - Print characters in the array
 * @a: pointer of values
 * @n: The array : Memory of same type elements
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
