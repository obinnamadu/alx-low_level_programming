#include "nain.h"

/**
 * print_chessboard -prints the chessboard
 * @a: pointer to chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i, n;

	for (n = 0; n < 8; n++)
	{
		for (i = 0; i < 8; i++)
			_putchar(a[n][i]);
		_putchar('\n');
	}
}
