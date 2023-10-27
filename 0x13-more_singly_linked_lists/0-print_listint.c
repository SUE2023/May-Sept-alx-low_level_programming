#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements
 * Description: of a listint_t list
 * @head: pointer to head
 * Return: (nodecount)
 */
size_t print_listint(const listint_t *head)
{
	size_t nodecount = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		nodecount++;
	}
	return (nodecount);
}
