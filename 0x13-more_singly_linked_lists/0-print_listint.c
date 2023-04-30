#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to an element in the linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	listint_t *tmp;

	if (h == NULL)
		return (0);

	printf("%d\n", h->n);
	i++;
	tmp = h->next;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
