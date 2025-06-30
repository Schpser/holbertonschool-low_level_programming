#include "main.h"
/**
 * leet - Code to 1337
 * @s: String to change
 * Return: To the destination
 */

char *leet(char *s)
{
char letters[] = "aAeEoOtTlL";
char numbers[] = "430711";
int i = 0, j;
while (s[i])
{
j = 0;
while (letters[j] && s[i] != numbers[j / 2])
{
if (s[i] == letters[j])
s[i] = numbers[j / 2];
j++;
}
i++;
}
return (s);
}
