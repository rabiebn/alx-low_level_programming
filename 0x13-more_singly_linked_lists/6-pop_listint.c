#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list and returns its data
 * @head: head of the listint_t list
 *
 * Return: int stored in head->n, 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int n;

	if (!*head)
		return (0);

	n = (*head)->n;
	free(*head);
	*head = (*head)->next;
	return (n);
}
