#include "main.h"
/**
 * print_rev - Reverses a string
 * @s: The string to be reversed
 * Description: This function takes a string and reverses it by swapping
 * characters from the beginning and end, moving towards the center.
 * It uses the _strlen function to determine the length of the string.
 */
void print_rev(char *s)
{
char *end = s;
while (*end != '\0')
end++;
end--;
while (end >= s)
{
_putchar(*end);
end--;
}
_putchar('\n');
}
