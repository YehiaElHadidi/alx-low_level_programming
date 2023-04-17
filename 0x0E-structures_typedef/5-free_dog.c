#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - prints a struct dog
 * @d: struct dog to print
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
