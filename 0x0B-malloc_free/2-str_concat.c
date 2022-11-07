#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second dtring
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int length1 = 0;
	int length2 = 0;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		length1++, i++;
	while (*(s2 + j))
		length2++, j++;
	length2++;

	concatenated = malloc(sizeof(char) * (length1 + length2));

	if (concatenated == NULL)
		return (NULL);

	i = 0, j = 0;
	while (i < length1)
	{
		*(concatenated + i) = *(s1 + i);
		i++;
	}
	while (j < length2)
	{
		*(concatenated + i) = *(s2 + j);
		i++, j++;
	}

	return (concatenated);
}
