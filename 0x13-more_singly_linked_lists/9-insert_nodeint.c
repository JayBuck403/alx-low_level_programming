#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t list at a given position.
 * @head: head of the listint_t list.
 * @idx: index of the listint_t list where the new node should be added
 * @n: integer for the new node to contain.
 *
 * Return: the address of the new node otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *copy = *head;
	unsigned int node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = copy;
		*head = new_node;
		return (new_node);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new_node->next = copy->next;
	copy->next = new_node;

	return (new_node);
}
