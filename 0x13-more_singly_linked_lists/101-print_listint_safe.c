#include "lists.h"

/**
 * find_looped_listint - finds loop in a listint_t list
 * @head: head of list
 *
 * Return: address of node where loop starts, NULL if no loop was found
 */
listint_t *find_looped_listint(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	for (fast = head->next; fast != NULL; fast = fast->next)
	{
		if (fast == fast->next)
			return (fast);

		for (slow = head; slow != fast; slow = slow->next)
			if (slow == fast->next)
				return (fast->next);
	}
	return (NULL);
}


/**
 * print_listint_safe - prints a listint_t list with addresses
 * @head: head of the list
 *
 * Return: number of nodes in list, exit(98) if failed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	size_t i;
	listint_t *start_loop;

	start_loop = find_looped_listint((listint_t *) head);

	for (len = 0, i = 1; (head != start_loop || i) && head != NULL; len++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == start_loop)
			i = 0;
		head = head->next;
	}

	if (start_loop != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (len);
}
