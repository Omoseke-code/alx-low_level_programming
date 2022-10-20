#include "lists.h"
#include "string.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to starting address of list
 * @str: to be added
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	int len;
	char *dup;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(newnode);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
		;
	newnode->len = len;
	newnode->str = dup;
	newnode->next = 0;
	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next != 0)
			temp = temp->next;
	temp->next = newnode;
	}
	return (*head);
}
