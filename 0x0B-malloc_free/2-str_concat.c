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
	char *p;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i))
		len1++, i++;

	while (*(s2 + j))
		len2++, j++;

	p = (char *)malloc(sizeof(char) * (len1 + len2));

	if (p == NULL)
		return (NULL);

	i = j = 0;
	while (i < len1)
	{
		*(p + i) = *(s1 + i);
		i++;
	}
	while (j <= len2)
	{
		*(p + i) = *(s2 + j);
		i++, j++;
	}

	return (p);
}
