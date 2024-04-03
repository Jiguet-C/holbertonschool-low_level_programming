#include "lists.h"

/**
 * free_list - free a list_t list
 * @head: elements of list_t list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
