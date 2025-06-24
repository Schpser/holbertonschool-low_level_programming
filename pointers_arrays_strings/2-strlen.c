#include "main.h"
/**
* _strlen - the function that return's string's lenght
* @s: string's lenght
* Return: Success.
*/
int _strlen(char *s)
{
int l = 0;
while (*s != '\0')
{
l++;
s++;
}
return (l);
}
