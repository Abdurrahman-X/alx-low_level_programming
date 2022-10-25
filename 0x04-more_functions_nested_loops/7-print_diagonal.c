#include "main.h"

/**
 * print_diagonal - a function that draws a digonal line
 * @n: no of times '\' should be printed
 */

void print_diagonal(int n)
{
	int diag;
	int space;

	if (n > 0)
	{
		for (diag = 1; diag <= n; diag++)
		{
			for (space = 1; space < diag; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
