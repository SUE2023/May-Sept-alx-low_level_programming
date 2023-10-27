#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node
 * Description: at the end of a listint_t list
 * @n: the node to be added
 * @head: original pointer
 * Return: (newNode)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp = *head;
	
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	return (newNode);
}
