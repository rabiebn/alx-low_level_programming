#include "lists.h"

/**
 * list_len - calculates number of elements in a list_t list
 * @h: pointer to an element in the linked list
 *
 * Return: length of a list_t list
 */
size_t list_len(const list_t *h)
{
	size_t len;
	list_t *tmp;

	if (h == NULL)
		return (0);
	else
		len = 1;

	tmp = h->next;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}
