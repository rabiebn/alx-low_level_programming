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

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *                            in a dlistint_t list.
 * @h: head of the list;
 * @idx: index where the new node should be added;
 * @n: data of the new node.
 *
 * Return: address to the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));
	tmp = get_dnodeint_at_index(*h, idx);
	if (!tmp)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	new_node->prev = tmp->prev;
	tmp->prev->next = new_node;
	tmp->prev = new_node;
	new_node->next = tmp;

	return (new_node);
}
