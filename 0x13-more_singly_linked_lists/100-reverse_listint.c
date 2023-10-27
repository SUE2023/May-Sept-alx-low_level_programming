#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * Description: reverses a listint_t linked list
 * @head: pointer to the first element
 * Return: pointer to list element
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *new_temp;

	temp = *head;
	*head = temp->next;
	temp->next = NULL;

	while (temp->next == NULL)
	{
		new_temp = *head;
		(*head)->next = new_temp->next;
		new_temp->next = NULL;
	}
	return (*head);
}
