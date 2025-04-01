#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list.
 *
 * @head: the actual first node.
 * @str: a string to initialize the new first node.
 *
 * Return: the address of the new element, or NULL if it faile
 */

list_t *add_node(list_t **head, const char *str)
{
	int length = 0;
	list_t *new_node = malloc(sizeof(list_t));
	char *copy = strdup(str);

	if (copy == NULL)
	{
		return (NULL);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}
	new_node->str = copy;
	new_node->next = *head;
	new_node->len = length;

	*head = new_node;
	return (new_node);
}
