#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at given position.
 * @head: head.
 * @idx: index of list new node is added.
 * @n: integer element.
 *
 * Return: address of new node, or NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode;
	listint_t *hNode;

	hNode = *head;

	if (idx != 0)
	{
		while (i < idx - 1 && hNode != NULL)
		{
			hNode = hNode->next;
			i++;
		}
	}

	if (hNode == NULL && idx != 0)
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
		newNode->next = hNode->next;
		hNode->next = newNode;
	}

	return (newNode);
}
