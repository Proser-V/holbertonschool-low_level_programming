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
	int length = 0;
	list_t *new_node;
	list_t *last = *head;
	char *copy;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	copy = strdup(str);
	if (copy == NULL)
	{
		free(new_node);
		return (NULL);
	}
		while (str[length] != '\0')
		length++;

	new_node->str = copy;
	new_node->len = length;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (new_node);
}
