#include "lists.h"

/**
 * free_dlistint - free a doubly linked list (dlistint_t).
 * @head: list's head.
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		while (head->next)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
