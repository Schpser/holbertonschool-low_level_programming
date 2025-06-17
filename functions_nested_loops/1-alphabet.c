#include "main.h"
/**
* print_alphabet - Prints the lowercase alphabet
*
* Description: Uses _putchar to print all lowercase letters from 'a' to 'z'
* followed by a new line.
* Respects the constraint of using only two _putchar calls.
*
* Return: void (no return value)
*/
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
