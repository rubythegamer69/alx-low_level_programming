#include "lists.h"

/**
 * pop_listint - delete head of a linked list
 * @head: head.
 *
 * Return: head node data.
 */
int pop_listint(listint_t **head)
{
	int headNode;
	listint_t *hNode;
	listint_t *currentNode;

	if (*head == NULL)
		return (0);

	currentNode = *head;

	headNode = currentNode->n;

	hNode = currentNode->next;

	free(currentNode);

	*head = hNode;

	return (headNode);
}
