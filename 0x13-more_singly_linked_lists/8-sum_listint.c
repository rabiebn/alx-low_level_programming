#include "lists.h"

/**
 * sum_listint - calculates the sum of all data (n) of a listint_t list
 * @head: head of the list
 *
 * Return: sum of data (n), 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
