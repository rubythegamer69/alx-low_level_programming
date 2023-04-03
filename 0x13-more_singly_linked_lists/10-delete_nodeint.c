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
		for (i = 0; i < index - 1 && prevNode != NULL; i++)
		{
			prevNode = prevNode->nextNode;
		}
	}

	if (prevNode == NULL || (prevNode->nextNode == NULL && index != 0))
	{
		return (-1);
	}

	nextNode = prevNode->nextNode;

	if (index != 0)
	{
		prevNode->nextNode = nextNode->nextNode;
		free(nextNode);
	}
	else
	{
		free(prevNode);
		*head = nextNode;
	}
	return (1);
}
