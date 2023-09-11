#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - Defines a structure to represent a dog
 * @name: Pointer the dog's name
 * @age: The dog's age
 * @owner: Name of the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
