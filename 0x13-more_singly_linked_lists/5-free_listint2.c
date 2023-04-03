#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *tempNode;
	listint_t *currentNode;

	if (head != NULL)
	{
		currentNode = *head;
		while ((tempNode = currentNode) != NULL)
		{
			currentNode = currentNode->next;
			free(tempNode);
		}
		*head = NULL;
	}
}
