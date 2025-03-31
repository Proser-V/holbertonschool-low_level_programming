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
	int index = 0;
	list_t *first = malloc(sizeof(list_t));
	char *copy = strdup(str);

	if (str == NULL || first == NULL || copy == NULL)
	{
		return (NULL);
	}

	while (str[index] != '\0')
	{
		index++;
	}
	first->next = *head;
	first->str = copy;
	first->len = index;

	*head = first;
	return (first);
}
