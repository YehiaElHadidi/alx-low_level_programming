#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * new_dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
