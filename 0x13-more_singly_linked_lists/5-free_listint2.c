#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: head of the listint_t list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
