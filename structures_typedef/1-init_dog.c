#include "dog.h"
#include "main.h"

/**
 * init_dog - initalize "dog" stucture
 * @d: dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner's name
 * Return: nothing (void)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
