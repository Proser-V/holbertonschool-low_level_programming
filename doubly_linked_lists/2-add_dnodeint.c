#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a double linked list.
 *
 * @head: the actual first node.
 * @n: an integer to fill the new node.
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *first = malloc(sizeof(dlistint_t));

	if (first == NULL)
	{
		return (NULL);
	}

	first->n = n;
	first->prev = NULL;
	first->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = first;
	}

	*head = first;
	return (first);
}
