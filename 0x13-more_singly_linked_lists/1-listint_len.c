#include "lists.h"

/**
 * listint_len - calculates the number of elements in a listint_t list
 * @h: pointer to the head of the listint_t list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 1;
	listint_t *tmp;

	if (!h)
		return (0);

	tmp = h->next;
	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}
	return (len);
}
