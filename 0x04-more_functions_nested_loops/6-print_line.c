#include "main.h"

/**
 * print_line - a function that draws a a straight line in the terminal
 * @n: no of characters to draw
 */

void print_line(int n)
{
	int numOfTimes;

	for (numOfTimes = n; numOfTimes > 0; numOfTimes--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
