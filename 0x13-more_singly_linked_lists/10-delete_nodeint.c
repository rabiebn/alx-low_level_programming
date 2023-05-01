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

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if successful, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2;

	if (!*head)
		return (1);

	tmp = get_nodeint_at_index(*head, index);
	if (!tmp)
		return (-1);

	free(tmp);
	if (index == 0)
	{
		free(*head);
		*head = (*head)->next;
		return (1);
	}

	tmp = get_nodeint_at_index(*head, index - 1);
	tmp2 = get_nodeint_at_index(*head, index + 1);
	tmp->next = tmp2;
	return (1);
}
