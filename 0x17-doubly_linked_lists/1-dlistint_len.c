#include "lists.h"

/**
 * dlistint_len - counts number of elements in a dlistint_t doubly linked list.
 * @h: head of the list.
 *
 * Return: number of nodes in a list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *tmp;

	if (!h)
		return (0);

	count++;

	tmp = h->next;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}

	return (count);
}
