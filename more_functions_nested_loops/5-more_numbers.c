#include "main.h"

/**
 * more_numbers - print specific numbers
 */

void more_numbers(void)
{
int ligne, nombre;
for (ligne = 0; ligne < 10; ligne++)
{
for (nombre = 0; nombre <= 14; nombre++)
{
if (nombre > 9)
_putchar((nombre / 10) + '0');
_putchar((nombre % 10) + '0');
}
_putchar('\n');
}
}
