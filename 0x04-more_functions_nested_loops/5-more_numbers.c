#include "main.h"

/**
 * more_numbers - print 0 - 14, ten times
 */

void more_numbers(void)
{
	int count;
	char i;

	for (count = 0; count < 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
