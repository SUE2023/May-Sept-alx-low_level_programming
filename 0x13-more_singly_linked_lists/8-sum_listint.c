#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n)
 * Description: of a listint_t linked list
 * @head: poitner to the list
 * Return: pointer
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		temp = head;
		sum += temp->n;
		head = head->next;
	}
	return (sum);
}
