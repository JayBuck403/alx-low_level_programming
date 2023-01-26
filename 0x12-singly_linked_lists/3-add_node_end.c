#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the list_t list.
 * @str: string to be added to the list_t list.
 *
 * Return: the address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new_node;
	list_t *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->str = duplicate;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}

	return (*head);
}
