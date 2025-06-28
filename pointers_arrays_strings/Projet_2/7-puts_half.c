#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The string to process
 *
 * Description: If the number of characters is odd,
 * prints the last (length + 1)/2 characters.
 */
void puts_half(char *str)
{
int lenght = 0;
int i, n;
while (str[lenght] != '\0')
lenght++;
n = lenght / 2 + lenght % 2;
for (i = n; i < lenght; i++)
_putchar(str[i]);
_putchar('\n');
}
