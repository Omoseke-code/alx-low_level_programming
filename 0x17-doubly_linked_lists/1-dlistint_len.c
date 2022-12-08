#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked
* @h: head pointer
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	if (h == NULL)
		return (len);
	while (h != 0)
	{
		h = h->next;
		len++;
	}
	return (len);
}
