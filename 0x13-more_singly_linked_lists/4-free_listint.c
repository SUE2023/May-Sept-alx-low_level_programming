#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * Description: frees a listint_t list
 * @head: is the pointer
 * Return: (void)
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (head != NULL)
	{
		head = head->next;
		free(temp);
	}
}
