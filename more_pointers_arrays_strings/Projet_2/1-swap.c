#include "main.h"
/**
 * swap_int - swap the value of 2 integers
 * @a: First integer
 * @b: 2nd one
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *b;
*b = *a;
*a = temp;
}
