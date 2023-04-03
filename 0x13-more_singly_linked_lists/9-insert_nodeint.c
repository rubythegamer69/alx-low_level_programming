#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at a given position.
 * @head: head.
 * @idx: index of the list node will be added.
 * @n: integer.
 *
 * Return: address of new node/NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode;
	listint_t *headNode;

	headNode = *head;

	if (idx != 0)
	{
		while (i < idx - 1 && headNode != NULL)
		{
			headNode = headNode->next;
			i++;
		}
	}

	if (headNode == NULL && idx != 0)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		newNode->next = h->next;
		h->next = newNode;
	}

	return (newNode);
}
