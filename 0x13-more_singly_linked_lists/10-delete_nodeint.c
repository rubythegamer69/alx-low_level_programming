#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at an index in a linked list.
 * @head: head.
 * @index: index of the deletion.
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prevNode;
	listint_t *nextNode;

	prevNode = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++)
		{
			prevNode = prevNode->next;
		}
	}

	if (prevNode == NULL || (prevNode->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prevNode->next;
	return (1);
}
