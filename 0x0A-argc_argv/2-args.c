#include "main.h"
#include <stdio.h>

/**
 * main - print each argument passed to program on a new line
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int a;

	while (a < argc)
		printf("%s\n", argv[a++]);

	return (0);
}
