#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - adds a new node
 * Description: at the end of a list_t list
 * @head: original pointer
 * @str: noted to be added
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	else
	newNode->str = strdup(str);
	newNode->next = NULL;
	newNode->next  = *head;
	free(newNode);

	return (*head);
}
