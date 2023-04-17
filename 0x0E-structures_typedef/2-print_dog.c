#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to a struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)");
	printf("Name: %s\n", d->name);

	if (d->age)
		printf("Age: %.1f\n", d->age);
	else
		printf("Age: (nil)");

	if (d->owner == NULL)
		printf("Owner: (nil)");
	printf("Owner: %s\n", d->owner);
}
