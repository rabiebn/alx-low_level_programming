#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: head of the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1, *tmp2;

	if (head == NULL || *head == NULL)
		return (NULL);

	tmp1 = NULL;
	while (*head != NULL)
	{
		tmp2 = (*head)->next;
		(*head)->next = tmp1;
		tmp1 = *head;
		*head = tmp2;
	}
	(*head) = tmp1;

	return (*head);
}
