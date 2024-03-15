#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* _strlen - length of a string
* @s: string
* Return: number of char
*/

int _strlen(char *s)
{
	int nombreCaract = 0;

	while (*s != '\0')
	{
		nombreCaract++;
		s++;
	}

	return (nombreCaract);
}

/**
 * _strdup - returns a pointer to a newly memory - copy of the string
 * @str: string
 * Return: NULL if size 0 or it fails
 */

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int size;
	char *buffer;

	if (str == NULL)
		return (NULL);

	size = _strlen(str) + 1;
	buffer = malloc(sizeof(unsigned char) * size);

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = str[i];

	return (buffer);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL)
		return (NULL);
	
	new_dog->name = _strdup(name);
	new_dog->owner = _strdup(owner);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
	}

	new_dog->age = age;

	return (new_dog);
}
