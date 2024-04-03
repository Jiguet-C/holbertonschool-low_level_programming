#include "lists.h"

/**
* _strlen - length of a string
* @s: string
* Return: number of char
*/

int _strlen(const char *s)
{
	int nombreDeCaracteres = 0;

	while (*s != '\0')
	{
		nombreDeCaracteres++;
		s++;
	}
	return (nombreDeCaracteres);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: address of the beginning of list_t list
 * @str: string to add
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
