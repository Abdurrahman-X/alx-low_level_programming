#include "main.h"

/**
 * puts2 - prints every second character of a string, followed by a new line
 * @str: string to print
 * Return: print
 */

void puts2(char *str)
{
	int a = 0, b = 0;

	while (str[a++])
		b++;
	for (a = 0; a < b; a += 2)
		_putchar(str[a]);
	_putchar('\n')
}
