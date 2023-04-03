#include "lists.h"

/**
 * add_nodeint_end - add new node at end of a list
 * @head: head.
 * @n: n element.
 *
 * Return: address to new node, or NUll if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *tempnode;

	(void)tempnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	tempnode = *head;
	if (*head == NULL)
	{
		*headnode = new;
	}
	else
	{
		for ( ; tempnode->next != NULL ; )
		{
			tempnode = tempnode->next;
		}
		tempnode->next = newnode;
	}

	return (*head);
}
