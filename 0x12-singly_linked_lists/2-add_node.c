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

	new_head->str = malloc(sizeof(char) * (strlen(str) + 1));
	if (!new_head || !new_head->str)
		return (NULL);

	new_head->str = strdup(str);
	new_head->len = strlen(str);
	new_head->next = *head;

	return (new_head);
}
