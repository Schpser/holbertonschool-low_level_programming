#include <stdio.h>
/**
 * main - Prints all hexadecimal digits in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
putchar(c);
for (c = 'a'; c <= 'f'; c++)
putchar(c);
putchar('\n');
return (0);
}
