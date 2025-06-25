#include "main.h"
/**
 * rev_string - Reverses a string in place and prints it
 * @s: The string to reverse and print
 *
 * Description: This function first prints the string normally,
 * then reverses it and prints it again.
 * It uses pointer arithmetic to traverse the string.
 */
void rev_string(char *s)
{
char *end = s;
char swap;

if (!s) return;
while (*end)
end++;
end--;
while (s < end)
{
swap = *s;
*s = *end;
*end = swap;
s++;
end--;
}
}
