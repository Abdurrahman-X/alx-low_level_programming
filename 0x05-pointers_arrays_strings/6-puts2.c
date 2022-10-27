#include "main.h"

/**
 * puts2 - prints every second character of a string, followed by a new line
 * @str: string to print
 * Return: print
 */

void puts2(char *str)
{
	int i;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}

	_putchar('\n');
}
