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
	list_t *last = malloc(sizeof(list_t));
	char *copy = strdup(str);

	if (last == NULL || copy == NULL)
	{
		return (NULL);
	}

	while (str[index] != '\0')
	{
		index++;
	}
	head->next = *last;
	last->str = copy;
	last->len = index;

	*head = last;
	return (last);
}
