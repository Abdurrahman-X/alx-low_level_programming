#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	char tmp = s[0];
	int i;
	int count = 0;

	while (s[fcounter] != '\0')
		count++;

	for (i = 0; i < fcounter; i++)
	{
		count--;
		tmp = s[i];
		s[i] = s[count];
		s[count] = tmp;
	}
}
