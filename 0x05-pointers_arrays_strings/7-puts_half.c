#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: input string
 */

void puts_half(char *str)
{
	int index;

	int length = _strlen(str);

	if (length % 2 != 0)
	{
		index = (length / 2) + 1;
	}
	else
	{
		index = (length / 2);
	}

	while (index < length)
	{
		_putchar(*(str + index));
		index++;
	}
	_putchar('\n');
}
