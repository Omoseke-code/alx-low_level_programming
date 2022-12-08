#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: head pointer
 * @n: element to be added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = 0;
	new->next = 0;

	if (*head != 0)
	{
		(*head)->prev = new;
		new->next = *head;
	}
	*head = new;
	return (new);
}
