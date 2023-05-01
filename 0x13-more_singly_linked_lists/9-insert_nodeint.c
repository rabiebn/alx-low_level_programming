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
 * insert_nodeint_at_index - inserts a new node in a given position
 * @head: head of a listint_t list
 * @idx: index of where to insert the new node
 * @n: data (n) of the new node
 *
 * Return: address of the new node, NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new_node = malloc(sizeof(listint_t));

	if (!new_node || (!*head && idx != 0))
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	tmp = get_nodeint_at_index(*head, idx - 1);
	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
