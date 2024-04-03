#include "lists.h"

/**
 * print_list - Print list
 * @h: list_t list
 *
 * Return: number of elements in list_t list
 */

size_t list_len(const list_t *h)
{
	/* Initialize the counter for nodes */
	size_t nodes = 0;

	/* Traverse the list until we reach the end */
	while (h != NULL)
	{
		/* Check if the string is NULL */
		if (h->str == NULL)
			continue;
		else
		/* Increment the node counter */
		nodes++;
		/* Move to the next element of the list */
		h = h->next;
	}
	/* Return the total number of nodes in the list */
	return (nodes);
}
