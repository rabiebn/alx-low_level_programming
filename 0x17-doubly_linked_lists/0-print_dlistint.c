#include "lists.h"

/**
 * print_dlistint - prints all the elements of dlistint_t doubly linked list.
 * @h: head of the list.
 *
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *tmp;

	if (!h)
		return (0);

	printf("%d\n", h->n);
	count++;

	tmp = h->next;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
