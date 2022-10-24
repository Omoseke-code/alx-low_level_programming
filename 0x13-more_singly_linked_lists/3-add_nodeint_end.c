#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the ebd of a list
 * @head: pointer
 * @n: property
 * Return: address pf new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	new->n = n;
	new->next = 0;
	temp = *head;
	while (temp->next != 0)
		temp = temp->next;
	temp->next = new;
	return (new);
}
