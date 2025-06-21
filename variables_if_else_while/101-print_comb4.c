#include <stdio.h>
/**
* main - Prints unique three-digit combinations
* Return: Always 0 (Success)
*/
int main(void)
{
int centaine, dizaine, unite;
for (centaine = 0; centaine <= 7; centaine++)
{
for (dizaine = centaine + 1; dizaine <= 8; dizaine++)
{
for (unite = dizaine + 1; unite <= 9; unite++)
{
putchar('0' + centaine);
putchar('0' + dizaine);
putchar('0' + unite);
if (!(centaine == 7 && dizaine == 8 && unite == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
