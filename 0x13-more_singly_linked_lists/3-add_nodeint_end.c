#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a listint_t list
 * @head: head of the list
 * @n: value n of the new node
 *
 * Return: address of the new node, NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	tmp = *head;
	if (!tmp)
	{
		*head = new_node;
		return (*head);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
