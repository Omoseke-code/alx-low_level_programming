#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node to the neginning of the list
 * @head: pointer
 * @n: property
 * Return: address pf the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
