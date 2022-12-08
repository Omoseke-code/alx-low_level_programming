#include "lists.h"

/**
 * get_dnodeint_at_index - eturns the nth node of a dlistint_t linked list
 * @head: head pointer
 * @index: position of element
 * Return: nth element
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		head = head->next;
		len++;
		if (len == index)
		{
			break;
		}
	}
	return (head);
}
