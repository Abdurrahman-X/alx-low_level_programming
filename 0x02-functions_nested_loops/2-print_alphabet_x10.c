#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int i;

	i = 0;

	while (i < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		
		i++;
		_putchar('\n');
	}
}
