#include "lists.h"

/**
 * listint_len - returns number of elemenents in a linked list
 * @h: head.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nd = 0;

	for ( ;h != NULL; nd++)
	{
		h = h->next;
	}
	return (nd);
}
