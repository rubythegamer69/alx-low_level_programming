#include "lists.h"

/**
 * sum_listint - returns the sum of data in a linked list.
 * @head: head.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	for ( ; head != NULL ; )
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
