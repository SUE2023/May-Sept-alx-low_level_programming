#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len -  returns the number of elements
 * Description: in a linked listint_t list
 * @head: original pointer
 * Return: count
 */
size_t listint_len(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		head = head->next;
		count++;
	}
	return (count);
}
