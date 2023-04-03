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

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nd++;
	}
	return (nd);
}
