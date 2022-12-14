#include "main.h"

/**
 * print_triangle - a function that prints a triangle followed by a new line
 * @size: size of triangle to be drawn
 */

void print_triangle(int size)
{
	int draw;
	int height;
	int width;

	if (size <= 0)
		_putchar('\n');

	for (height = 1; height <= size; height++)
	{
		for (width = 1; width <= (size - height); width++)
			_putchar(' ');
		for (draw = 1; draw <= height; draw++)
			_putchar('#');

		_putchar('\n');
	}
}
