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
	int n1, n2;
	int (*f)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(av[1]);
	n2 = atoi(av[3]);
	f = get_op_func(av[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*av[2] == '/' || *av[2] == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(av[2]))(n1, n2));

	return (0);
}
