#include "main.h"

/**
 * jack_bauer - print every minutes of the day
 * Return: print every min of the day from 00:00 t0 23:59
 */

void jack_bauer(void)
{
	int hrs;
	int mins;

	while (hrs < 24)
	{
		while (mins < 60)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
			min++;
		}
		mins = 0;
		hrs++;
	}
}

