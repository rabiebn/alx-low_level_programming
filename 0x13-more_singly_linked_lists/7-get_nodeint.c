#include "lists.h"

/**
 * get_nodeint_at_index - finds and returns the n-th node a listint_t list
 * @head: head of the listint_t list
 * @index: index of node starting at 0
 *
 * Return: node according to the index, NULL if doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	tmp = head;
	while (i < index)
	{
		if (!tmp)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
