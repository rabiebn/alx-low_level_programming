#include <stdlib.h>
#include "main.h"

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
	char *concat = malloc(sizeof(*s1) + n);
	unsigned int len2 = 0, i = 0, j = 0;

	if (concat == NULL)
		return (NULL);

	while (*(s1 + i) != '\0')
	{
		*(concat + i) = *(s1 + i);
		i++;
	}
	while (*s2)
	{
		s2++;
		len2++;
	}
	if (n >= len2)
	{
		while (j < len2)
		{
			*(concat + i + j) = *(s2 + j);
			j++;
		}
	}
	else
	{
		while (j < n)
		{
			*(concat + i + j) = *(s2 + j);
			j++;
		}
	}
	*(concat + i + j) = '\0';

	return (concat);
}
