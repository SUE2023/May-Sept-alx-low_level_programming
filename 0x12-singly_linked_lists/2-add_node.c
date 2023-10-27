#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a new node
 * Description: at the beginning of a list_t list
 * @head:original pointer
 * @str: newnode to be added
 * Return: (*head)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int length = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	for (length = 0; str[length] > 0; length++)
		;
	newNode->len = length;
	newNode->str = strdup(str);
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
