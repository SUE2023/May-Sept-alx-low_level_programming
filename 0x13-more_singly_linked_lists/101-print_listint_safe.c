#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * Description: safe version
 * @head: original pointer
 * Return: number of elements
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *headptr = head;
	const listint_t *newheadptr = head;

	if (headptr == NULL)
		exit(98);
	while (headptr != NULL && newheadptr != NULL)
	{
		printf("[%p] %d\n", (void *)headptr, headptr->n);
		headptr = headptr->next;
		newheadptr = newheadptr->next->next;
		count++;

		if (headptr == newheadptr)
		{
			printf("[%p] %d\n",(void *)headptr, headptr->n);
			break;
		}
	}
	return (count);
}
