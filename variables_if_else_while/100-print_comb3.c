#include <stdio.h>
/**
* main - Prints unique two-digit combinations
* Return: Always 0 (Success)
*/
int main(void)
{
int dizaine, unite;
for (dizaine = 0; dizaine < 9; dizaine++)
{
for (unite = dizaine + 1; unite <= 9; unite++)
{
putchar('0' + dizaine);
putchar('0' + unite);
if (!(dizaine == 8 && unite == 9))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
