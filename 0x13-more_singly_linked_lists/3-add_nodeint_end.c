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
	listint_t *temp;

	(void)temp;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*headnode = new;
	}
	else
	{
		for ( ; temp->next != NULL ; )
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}

	return (*head);
}
