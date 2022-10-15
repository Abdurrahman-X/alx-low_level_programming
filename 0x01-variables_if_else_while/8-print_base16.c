#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	int hex = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (hex < 'g')
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');

	return (0);
}
