#include "lists.h"

/**
 * dlistint_len - length of linked list
 * @h: list_t list
 *
 * Return: number of elements in list_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	/* Initialize the counter for nodes */
	size_t nodes = 0;

	/* Traverse the list until we reach the end */
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	/* Return the total number of nodes in the list */
	return (nodes);
}
