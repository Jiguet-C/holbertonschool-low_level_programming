#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list_t list
 * @head: address of the beginning of list_t list
 * @n: number given
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || head == NULL)
		return (0);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;
	return (new);
}
