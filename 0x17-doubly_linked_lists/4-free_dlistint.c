#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head of the list.
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)
		exit(EXIT_SUCCESS);
	tmp = head;
	while (tmp->next)
	{
		tmp = tmp->next;
		free(tmp->prev);
	}
	free(tmp);
}
