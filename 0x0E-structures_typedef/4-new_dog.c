#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - finds the length of string
 * @s: string
 * Return: lenght
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		;
	return (i);
}

/**
 * _strcopy - copies string
 * @from: string to copy
 * @to: the copy
 * Return: copy of the original string
 */

char *strcopy(char *from, char *to)
{
	int i;

	for (i = 0; i <= _strlen(from); i++)
		from[i] = to[i];

	return (to);
}

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: struct of type dog_t, NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *copy_name, copy_owner;

	newDog = (dog_t *)malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->age = age;
	
	if (name != NULL)
	{
		copy_name = (char *)malloc(_strlen(name) + 1);
		if (copy_name == NULL)
		{
			free(newDog);
			return (NULL);
		}
		newDog->name = strcopy(copy_name, name);
	}
	else
		newDog->name = NULL;
	
	if (owner != NULL)
	{
		copy_owner = (char *)malloc(_strlen(owner) + 1);
		if (copy_owner == NULL)
		{
			free(newDog);
			return (NULL);
		}
		newDog->owner = strcopy(copy_owner, owner);
	}
	else
		newDog->owner = NULL;

	return (newDog);
}
