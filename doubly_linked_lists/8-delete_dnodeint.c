#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a node at a given posiion in a double
 *                            linked list
 *
 * @head: the actual first node.
 * @index: index where to delete the node (starting from 0).
 *
 * Return: 1 if success, -1 if fails.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *to_delete;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current != NULL && index > 1)
	{
		current = current->next;
		index--;
	}
	if (current == NULL || current->next == NULL)
		return (-1);

	to_delete = current->next;
	current->next = to_delete->next;

	if (to_delete->next != NULL)
		to_delete->next->prev = current;

	free(to_delete);
	return (1);
}
