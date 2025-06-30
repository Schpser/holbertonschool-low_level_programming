#include "main.h"

/**
 * print_chessboard - Display the array
 * @a: Pointer to the array
 */
void print_chessboard(char (*a)[8])
{
	int ligne, colonne;

	for (ligne = 0; ligne < 8; ligne++)
	{
		for (colonne = 0; colonne < 8; colonne++)
		{
			_putchar(a[ligne][colonne]);
			if (colonne < 7)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
