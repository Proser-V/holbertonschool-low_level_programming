#include "lists.h"

/**
 * free_dlistint - Free a double linked list.
 *
 * @head: first element of the list.
 *
 * Return: nothing (void)
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *current = head;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
