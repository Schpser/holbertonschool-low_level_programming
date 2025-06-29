#include "main.h"

/**
 * cap_string - Capitalize all words in a string
 * @s: String to modify
 * Return: Pointer to modified string
 */
char *cap_string(char *s)
{
int i = 0;
int j = 0;
char sep[] = " \t\n,;.!?\"(){}";
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
for (i = 1; s[i]; i++)
for (j = 0; sep[j]; j++)
if (s[i - 1] == sep[j] && s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
return (s);
}
