#include "main.h"

/**
 * print_chessboard - print chessboard with a given 2D arrray set
 * @a: 2D array
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
			_putchar(a[row][col]);
		_putchar('\n');
	}
}
