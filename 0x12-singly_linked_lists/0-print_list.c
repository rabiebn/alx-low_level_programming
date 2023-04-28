#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to an element in the linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	list_t *tmp;

	if (!h->str)
	{
		printf("[0] (nil)\n");
		i++;
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
		i++;
	}

	tmp = h->next;
	while (tmp)
	{
		printf("[%d] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
