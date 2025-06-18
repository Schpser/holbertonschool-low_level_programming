#include "main.h"
#include <stdio.h>

/**
* print_to_98 - Prints numbers from n to 98
* @n: Starting number
*/
void print_to_98(int n)
{
while (1)
{
printf("%d", n);
if (n == 98)
break;
printf(", ");
n += (n < 98) ? 1 : -1;
}
printf("\n");
}
