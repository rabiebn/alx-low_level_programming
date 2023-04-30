#include "lists.h"

/**
 * add_nodeint - adds a new node to the begginning of a listint_t list
 * @head: head of the list
 * @n: value n of the new node
 *
 * Return: new node, NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
