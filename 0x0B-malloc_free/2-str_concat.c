#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a new allocated space in memory,
 * which contains s1 followed by s2, and \0, and Returns NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *p = (char *)malloc(sizeof(s1) + sizeof(s2));
	int i, j;

	i = j = 0;
	if (p == NULL)
		return (NULL);

	while (*(s1 + i) != '\0')
	{
		*(p + i) = *(s1 + i);
		i++;
	}

	while (*(s2 + j) != '\0')
	{
		*(p + i + j) = *(s2 + j);
		j++;
	}
	*(p + i + j) = '\0';

	return (p);
}
