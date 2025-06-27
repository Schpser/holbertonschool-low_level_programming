#include "main.h"

/**
 * _atoi - Converts string to integer
 * @s: String to convert
 * Return: Converted integer
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int nb = 0;

while (*s)
{
if (*s == '-')
sign *= -1;
if (*s >= '0' && *s <= '9')
nb = nb * 10 + (*s - '0');
else if (nb)
break;
s++;
}
return (sign *nb);
}
