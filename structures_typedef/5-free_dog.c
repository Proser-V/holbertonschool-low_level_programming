#include "dog.h"

/**
 * free_dog - free all the puppies
 * @d: struct dog
 * Return: nothing (void)
 */

void free_dog(dog_t *d)
{

	if (d == NULL)
	{
		return;
	}
	if (d->name != NULL)
	{
		free(d->name);
	}
	if (d->owner != NULL)
	{
		free(d->owner);
	}
	free(d);
}
