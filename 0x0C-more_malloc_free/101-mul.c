#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an int
 * @s: string to convert
 *
 * Return: converted int, 0 if string has no digits
 */
int _atoi(char *s)
{
	int i, neg, num;

	i = 0;
	num = 0;
	neg = 1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
		i++;
	if (s[i] == '-')
		neg *= -1;

	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
		num = (num * 10) + (s[i++] - '0');

	return (num * neg);
}
/**
 * main - multiplies two positive numbers
 * @argc: len of argv
 * @argv: args passed in the command line
 * Return: 0 on success
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
