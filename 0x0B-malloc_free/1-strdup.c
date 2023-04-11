#include <stdlib.h>
#include "main.h"

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
	int i = 0;

	if (str == NULL)
		return (NULL);

	p = (char *)malloc(sizeof(*str));

	if (p == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		*(p + i) = *(str + i);
		i++;
	}
	return (p);
}
