#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring to look for
 * Return: pointer to the beginning of the located substring,
 * 0 if the substriing is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j] == '\0')
				return (&haystack[i]);
			j++;
		}
		i++;
	}

	return (0);
}

