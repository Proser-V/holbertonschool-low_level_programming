#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *
 * @h: the actual first node.
 * @idx: index where to insert the node (starting from 0).
 * @n: Integer to fill the new node.
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (h == NULL || node == NULL)
	{
		return (NULL);
	}
	if (*h == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	if (idx == 0)
	{
		node->prev = NULL;
		node->next = *h;
		if (*h != NULL)
			(*h)->prev = node;
		*h = node;
		return (node);
	}
	while (temp != NULL && idx > 1)
	{
		temp = temp->next;
		idx--;
	}
	if (temp == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = temp->next;
	node->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = node;
	temp->next = node;
	return (node);
}
