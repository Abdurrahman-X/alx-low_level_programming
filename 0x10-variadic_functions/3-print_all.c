#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - print varying input of ints, chars, floats, and strings
 * @format: an array of chars signifying which data type to print
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	int n = 0, i = 0;
	char *sep = ", ";
	char *str;

	va_start(valist, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(valist, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(valist, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(valist, double), sep);
				break;
			case 's':
				str = va_arg(valist, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
		}
		n++;
	}
	va_end(valist);
	printf("\n");
}
