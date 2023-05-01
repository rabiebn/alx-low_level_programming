#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of a listint_t list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
