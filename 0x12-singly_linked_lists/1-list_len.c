#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements
 * Description: in a linked list_t list
 * @head: pointer head
 * Return: count
 */
size_t list_len(const list_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		head = head->next;
		count++;
	}
	return (count);
}
