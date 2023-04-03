#include "lists.h"

/**
 * print_listint - prints all list elements.
 * @h: head.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nd = 0;

	for ( ; h != NULL; nd++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nd);
}
