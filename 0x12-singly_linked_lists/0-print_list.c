#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements of a linked list
 * @h: pointer to node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodesNum;

	nodesNum = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodesNum++;
	}
	return (nodesNum);
}
