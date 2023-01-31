#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: head of the listint_t list.
 *
 * Return: The head node's data (n), otherwise 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (data);
}
