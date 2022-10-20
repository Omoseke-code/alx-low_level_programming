#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements of a linked list
 * @h: pointer to node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodesNum = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodesNum++;
		h = h->next;
	}
	return (nodesNum);
}
