#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node a listint_t linked list.
 * @head: head of the listint_t list.
 * @index: index of the node to locate
 *
 * Return: the located node otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
