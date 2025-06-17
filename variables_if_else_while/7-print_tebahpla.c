int < sdtio.h >
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
for (char letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
}
