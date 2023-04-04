#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to locate
 * Return: pointer to the first occurrence of c in s, NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (0);
}
