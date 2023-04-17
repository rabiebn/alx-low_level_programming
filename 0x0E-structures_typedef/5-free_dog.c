#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory allocated for dog_t structs
 * @d: pointer to struct dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
