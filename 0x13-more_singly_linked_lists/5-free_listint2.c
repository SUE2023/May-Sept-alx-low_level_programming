#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * Description: sets the head to NULL
 * @head: is the pointer
 * Return: (void)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(head);
		*head = temp;
	}
	*head = NULL;
}
