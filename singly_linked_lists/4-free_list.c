#include "lists.h"

/**
 * free_list - Free a list.
 *
 * @head: first element of the list.
 *
 * Return: nothing (void)
 */

void free_list(list_t *head)
{
	list_t *temp;
	list_t *current = head;

	while (current != NULL)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
}
