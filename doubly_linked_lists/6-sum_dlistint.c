#include "lists.h"

/**
 * sum_dlistint - Give the sum of all the data (n) of a double lincked list.
 *
 * @head: the actual first node.
 *
 * Return: the sum of all data, returns 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (node->next != NULL)
	{
		node = node->next;
		sum += node->n;
	}

	return (sum);
}
