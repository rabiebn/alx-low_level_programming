#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _atoi - Converts a string to an int
 * @s: string to convert
 * Return: returns converted int, returns 0 if no digits are found
 */
int _atoi(char *s)
{
	int num, i, neg;

	i = 0;
	num = 0;
	neg = -1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			neg *= -1;
		i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
		num = (num * 10) - (s[i++] - '0');
	return (num * neg);
}

/**
 * main - multiplies two numbers
 * @argc: lenght of argv
 * @argv: args passed in the command line
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int a, b, i, j;
	unsigned long mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	mul = a * b;
	printf("%lu\n", mul);
	return (0);
}
