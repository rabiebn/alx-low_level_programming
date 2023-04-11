#include <stdlib.h>
#include "main.h"

/**
 * _strlen - length of a string
 * @s: string
 * Return:len of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: Pointer to a copy of str,
 * NULL if str=NULL or insufficient memory was avalibale
 */

char *_strdup(char *str)
{
	char *p;
	int len, i = 0;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	p = (char *)malloc(len);

	if (p == NULL)
		return (NULL);

	while (i <= len)
	{
		*(p + i) = *(str + i);
		i++;
	}

	return (p);
}
