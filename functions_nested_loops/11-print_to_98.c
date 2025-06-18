#include <stdio.h>
/**
* print_to_98 - Prints all natural numbers from n to 98
* @n: The starting number (can be greater or smaller than 98)
*
* Description: Numbers are printed in order separated by commas and spaces.
* The last number printed is always 98 followed by new line.
*/
void print_to_98(int n)
{
while (n != 98)
{
printf("%d, ", n);
n += (n < 98) ? 1 : -1;
}
printf("98\n");
}
