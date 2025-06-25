#include "main.h"
/**
 * puts2 - to print the string
 * @str: the string
 * for - to print every 2 characters until the end of the string
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}
_putchar('\n');
}
