#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: address of the beginning of list_t list
 * @n: number given
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL || head == NULL)
		return (0);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;

		new->prev = last;
		last->next = new;
	}

	return (new);
}
