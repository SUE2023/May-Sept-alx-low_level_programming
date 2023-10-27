#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint -  adds a new node
 * Description: at the beginning of a listint_t list
 * @n: number of nodes to be added
 * @head: first pointer
 * Return: pointer to the head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}

