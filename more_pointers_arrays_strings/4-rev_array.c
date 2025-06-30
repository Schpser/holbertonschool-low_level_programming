#include "main.h"

/**
 * reverse_array - Swap element in array to reverse it
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
int i = 0;
int temp = a[i];
int end = n - 1;
while (i < end)
{
temp = a[i];
a[i] = a[end];
a[end] = temp;
i++;
end--;
}
}
