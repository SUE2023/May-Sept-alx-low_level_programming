#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - frees a list_t list
 * Description: frees a list_t list
 * @head: least to be freed
 * Return: void
 */
void free_list(list_t *head)
{
	list_t nextNode;

	while (head != NULL)
	{
		nextNode.next = NULL;
		free(head);
		head--;
	}
}
