#include "lists.h"

/**
 * list_len - number of elements in a link
 * @h: pointer to node
 * Return: length of link
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
