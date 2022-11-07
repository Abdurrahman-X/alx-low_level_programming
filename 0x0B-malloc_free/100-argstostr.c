#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: Length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
		length++, s++;

	return (length);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argc
 * @av: arguments
 * Return: pointer to array
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int length = 0, i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		length += _strlen(av[i]);
	}
	length += (ac + 1);

	s = malloc(len * sizeof(char));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}

	return (s);
}
