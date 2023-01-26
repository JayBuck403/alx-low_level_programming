#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the list_t list.
 * @str: string to be added to the list_t list.
 *
 * Return: address of the new element or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->str = duplicate;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
