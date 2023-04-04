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

	if (needle[0] == '\0')
		return(haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[i + j] == needle[j])
					j++;
				else
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
		i++;
	}

	return (0);
}
