#include <stdlib.h>
#include "main.h"

/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */

int _strlen(char *string)
{
	int i = 0;

	while (string[i] != '\0')
		i++;

	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number bytes to concatenate from s2
 * Return: pointer to an alloc space in memory containing s1
 * followed by n bytes of s2, NULL in failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int num, len2 = 0, j = 0;
	int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	concat = malloc(sizeof(*concat) * (_strlen(s1) + n + 1));

	if (concat == NULL)
		return (NULL);

	while (i < _strlen(s1))
	{
		*(concat + i) = *(s1 + i);
		i++;
	}

	len2 = _strlen(s2);
	num = n;
	if (n >= len2)
		num = _strlen(s2);
	while (j < num)
	{
		*(concat + i + j) = *(s2 + j);
		j++;
	}
	*(concat + i + j) = '\0';

	return (concat);
}
