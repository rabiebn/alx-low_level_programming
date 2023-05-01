#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of a listint_t list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	free(head);
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(tmp);
	}
	free(tmp);
}
