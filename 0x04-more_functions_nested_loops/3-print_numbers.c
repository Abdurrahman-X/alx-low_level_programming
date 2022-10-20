#include "main.h"

/**
 * print_numbers - print numbers 0 - 9
 */

void print_numbers(void)
{
	char n;

	for (n = '0'; n < '10'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
