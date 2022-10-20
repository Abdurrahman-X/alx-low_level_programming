#include "main.h"

/**
 * print_most_numbers - print 0 - 9, except 2 & 4
 * Return: 0 - 9, excluding 2 and 4, followed by a new line
 */

void print_most_numbers(void)
{
	char i;


	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' || i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
