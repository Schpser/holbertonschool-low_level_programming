#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
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
