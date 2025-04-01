#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list.
 *
 * @head: the actual first node.
 * @str: a string to initialize the new last node.
 *
 * Return: the address of the new element, or NULL if it faile
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int index = 0;
	list_t *current = malloc(sizeof(list_t));
	list_t *last = *head;
	char *copy = strdup(str);

	if (str == NULL || copy == NULL)
		return (NULL);

	if (current == NULL)
	{
		free(current);
		return (NULL);
	}
	while (str[index] != '\0')
		index++;

	current->len = index;
	current->str = copy;
	current->next = NULL;

	if (*head == NULL)
	*head = current;
	else
	{
	while (last->next != NULL)
	last = last->next;

	last->next = current;
	}
	return (current);
}
