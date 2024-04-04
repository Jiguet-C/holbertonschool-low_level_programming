#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns a node at the Nth position.
 * @head: The head of the linked list.
 * @index: The position of the node to return.
 * Return: The node at the Nth position, otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos = 0;

	while (head)
	{
		if (pos == index)
			return (head);
		head = head->next;
		pos++;
	}
	return (NULL);
}
