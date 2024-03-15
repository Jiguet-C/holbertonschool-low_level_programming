#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees dogs
 * @d: pointer to structur
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	free(d->name);
	free(d->owner);
	free(d);
}
