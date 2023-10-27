#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes head node of a listint_t linked list,
 * Description: and returns the head node’s data (n)
 * @head: pointer to the list
 * Return: (head)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	else
	{
		temp = *head;
		n = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (n);
}
