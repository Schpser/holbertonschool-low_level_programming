#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int number = 0;  /* Initialisation à 0 */
while (number <= 9)
{
putchar(number + '0');  /* Conversion int → caractère */
number++;
}
putchar('\n');  /* Saut de ligne final */
return (0);
}
