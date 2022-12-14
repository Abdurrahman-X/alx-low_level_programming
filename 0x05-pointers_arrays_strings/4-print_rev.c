#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int i;
	int length = 0;

	while (*s != '\0')
	{
		length++;
		++s;
	}

	s--;

	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
