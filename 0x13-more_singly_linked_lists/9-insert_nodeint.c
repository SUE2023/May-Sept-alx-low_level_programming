#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node
 * Description: at a given position
 * @head: pointer to the first element
 * @idx: position at insertion
 * @n: data of new node
 * Return: pointer new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *temp_old;
	listint_t *newNode;

	temp = *head;
	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	while (newNode != NULL)
	{
		if (*head == NULL)
		{
			*head = newNode;
			return (newNode);
		}
	}
	if (idx == 0)
		*head = newNode;
	for (i = 1; (i < idx  && temp != NULL && idx != 0); i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		while (temp != NULL)
		{
			if (idx == 0)
				newNode->next = temp;
		}
		newNode->n = n;
		temp_old = temp->next;
		temp->next = newNode;
		newNode->next = temp_old;
	}
	return (newNode);

}
