#include "lists.h"

/**
 * get_dnodeint_at_index - returns the n-th node of a dlistint_t list.
 * @head: head of the list;
 * @index: index of the node.
 *
 * Return: address of the element at the n-th node,
 *         or NULL if node does not exists.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index){
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
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: head of the list;
 * @index: idex of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	if (!*head)
		return (1);
	if (index == 0)
	{
		if (!(*head)->next)
		{
			free(*head);
			*head = NULL;
			return (1);	
		}

		(*head)->next->prev = NULL;
		*head = (*head)->next;
		return (1);
	}
	tmp = get_dnodeint_at_index(*head, index);
	if (!tmp)
		return (-1);

	if (!tmp->next)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;

	free(tmp);
	return (1);
}
