#include "lists.h"

/**
 * add_node - adds a node at the begginning of a list_t list
 * @head: pointer to head of the linked list
 * @str: str of the new node
 * Return: address of the new element, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (!new_head)
		return (NULL);

	new_head->str = strdup(str);
	new_head->len = strlen(str);
	new_head->next = *head;
	*head = new_head;

	return (*head);
}
