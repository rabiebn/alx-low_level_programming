#include "lists.h"

/**
 * sum_dlistint - sums all data (n) of a dlistint_t list.
 * @head: head of the list.
 *
 * Return: sum, 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
