#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase, followed by a new line
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char alpha = 'a';
	int i;

	for (i = 0; i <= 9; i++)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}

}
	
