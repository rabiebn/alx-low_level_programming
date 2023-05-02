#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list and returns its data
 * @head: head of the listint_t list
 *
 * Return: int stored in head->n, 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!*head)
		return (0);

	tmp = *head;
	n = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (n);
}
