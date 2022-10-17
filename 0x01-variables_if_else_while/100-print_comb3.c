#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;

	for (y = '0'; y <= '9'; y++)
	{
		for (x = '1'; x <= '9'; x++)
		{
			putchar(y);
			putchar(x);

			if (y != '8' || x != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
