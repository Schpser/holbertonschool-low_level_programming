#include <stdio.h>

/**
 * main - Prints number of arguments
 * @argc: Number of arguments
 * @argv: Argument's array (not used here)
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
