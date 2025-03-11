#include "dog.h"

/**
 * _strlen - found the lenght of a string
 * @str: target string
 * Return: the lenght of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - copy a string
 * @src: source string
 * @dest: destination string
 * Return: nothing (void)
 */

void _strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner's name
 * Return: nothing (void)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppie = ((dog_t *)malloc(sizeof(dog_t)));

	if (puppie == NULL)
	{
		return (NULL);
	}
	puppie->name = (char *)malloc(_strlen(name) + 1);
	if (puppie->name == NULL)
	{
		free(puppie);
		return (NULL);
	}
	_strcpy(puppie->name, name);

	puppie->owner = (char *)malloc((_strlen(owner) + 1) * sizeof(char));
	if (puppie->owner == NULL)
	{
		free(puppie->name);
		free(puppie);
		return (NULL);
	}

	_strcpy(puppie->owner, owner);

	puppie->age = age;

	return (puppie);
}
