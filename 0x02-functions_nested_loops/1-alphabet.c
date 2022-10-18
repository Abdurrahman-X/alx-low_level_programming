#include "main.h"

/**
 * main - print alphabets in lowercase, followed by a new line
 * Return: Always 0
 */

void print_alphabet(void)
{
	for (let alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');

	return (0);
}
