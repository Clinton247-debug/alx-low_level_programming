#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function that prints dog
 * @d: Pointer to the dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
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
}
