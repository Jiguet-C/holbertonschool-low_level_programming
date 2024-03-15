#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: structure dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			puts("Name: (nil)");
		else
			printf("Name: %s\n", (*d).name);

		if (d->age < 0)
			puts("Age: (nil)");
		else
			printf("Age: %f\n", (*d).age);

		if (d->owner == NULL)
			puts("Owner: (nil)");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}
