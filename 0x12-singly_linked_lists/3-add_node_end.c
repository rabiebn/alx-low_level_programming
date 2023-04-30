#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the current head of the list
 * @str: the string element of the new list_t node
 *
 * Return: address of the new node, NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *new_node;

	if (!str || !strdup(str))
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
