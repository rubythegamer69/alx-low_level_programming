#include "lists.h"

/**
 * add_nodeint_end - add new node at end of linked list
 * @head: head.
 * @n: n element.
 *
 * Return: address of new node. return NUll if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *tempNode;

	(void)tempNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	tempNode = *head;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (tempNode->next != NULL)
		{
			tempNode = tempNode->next;
		}
		tempNode->next = newNode;
	}

	return (*head);
}
