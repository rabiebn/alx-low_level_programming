#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of int with elements equal to 0
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to a 2D array of int, NULL if height or width <= 0,
 * and on failure
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(p[i]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}

	return (p);
}
