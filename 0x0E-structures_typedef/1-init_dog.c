#include <stdio.h>
#include "dog.h"


/**
 * init_dog - initialises struct dog with given values
 * @d: Pointer to the struct dog to initialise
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: NAme of the dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
