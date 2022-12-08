#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head
 * @idx: index
 * @n: new element
 * Return:  the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *new, *temp;

	if (h == NULL)
		return (NULL);

	if (idx < 1)
		return (NULL);
	else if (idx == 0)
		return (add_dnodeint(h, n));


	new = malloc(sizeof(dlistint_t));
	temp = *h;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	new->prev = temp;
	new->next = temp->next;
	temp->next = new;
	new->next->prev = new;
	new->n = n;

	return (new);
}
