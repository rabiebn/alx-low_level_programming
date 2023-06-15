#include "lists.h"

/**
 * get_dnodeint_at_index - returns the n-th node of a dlistint_t list.
 * @head: head of the list;
 * @index: index of the node.
 *
 * Return: address of the element at the n-th node,
 *         or NULL if node does not exists.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;

	if (!head)
		return (NULL);

	tmp = head;
	while (index)
	{
		if (!tmp->next)
			return (NULL);
		tmp = tmp->next;
		index--;
	}

	return (tmp);
}
