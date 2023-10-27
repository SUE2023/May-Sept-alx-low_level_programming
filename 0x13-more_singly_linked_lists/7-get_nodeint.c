#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * Description: retreive a note at the given index
 * @index: position of node
 * @head: pointer to first position
 * Return: (index node)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;
	
	if (head == NULL)
		return (NULL);

	for (a = 0; a < index; a++)
		head = head->next;
	
	return (head);
}
