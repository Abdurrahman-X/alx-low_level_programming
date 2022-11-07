#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * is_num - iterates through each argv to check if it's a number
 * @argvx: a argv
 * Return: true only if entire string is a number, false if otherwise
 */

bool is_num(char *argvx)
{
	int x = 0;

	for (x = 0; argvx[x]; x++)
	{
		if (!(argvx[x] >= '0' && argvx[x] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - print sum if all arguments given are numbers
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on success, 1 if an argument isn't a number
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		if (is_num(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}

	printf("%d\n", sum);

	return (0);
}
