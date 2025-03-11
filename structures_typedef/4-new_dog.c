#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner's name
 * Return: nothing (void)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_lenght, own_lenght;
	int index;
	char *name_cpy, *owner_cpy;

	dog_t *puppie = ((dog_t *)malloc(sizeof(dog_t)));

	if (puppie == NULL)
	{
		return (NULL);
	}

	puppie->name = name;
	puppie->age = age;
	puppie->owner = owner;

	for (name_lenght = 0; puppie->name[name_lenght] != '\0'; name_lenght++)
	{
	}

	for (own_lenght = 0; puppie->owner[own_lenght] != '\0'; own_lenght++)
	{
	}

	name_cpy = malloc(name_lenght + 1);
	if (name_cpy == NULL)
	{
		free(puppie);
		return (NULL);
	}
	owner_cpy = malloc(own_lenght + 1);
	if (owner_cpy == NULL)
	{
		free(puppie->name);
		free(puppie);
		return (NULL);
	}

	for (index = 0; index < name_lenght; index++)
	{
		name_cpy[index] = puppie->name[index];
	}
	for (index = 0; index < own_lenght; index++)
	{
		owner_cpy[index] = puppie->owner[index];
	}
	return (puppie);
}
