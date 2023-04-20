#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - preforms simple operations
 * @ac: number of command line arguments
 * @av: array of strings passed in the command line
 * Return: Success
 */

int main(int ac, char **av)
{
	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*av[2] != '+' && *av[2] != '-' && *av[2] != '*'
			&& *av[2] != '/' && *av[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*av[2] == '/' || *av[2] == '%') && atoi(av[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(av[2]))(atoi(av[1]), atoi(av[3])));

	return (0);
}
