#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node to the end of a linked listr
 * @head: pointer to the head of the list
 * @str: string to be stored in the new node
 * Return: pointer to the newly added node, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *lastnode;
	int i = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	while (str[i] != '\0')
		i++;

	node->len = i;
	node->next = NULL;

	lastnode = *head;
	while (lastnode != NULL && lastnode->next != NULL)
		lastnode = lastnode->next;

	if (lastnode == NULL)
		*head = node;
	else
		lastnode->next = node;

	return (node);
}
