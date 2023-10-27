#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints the nodes of a list_t list
 * Description: if str is NULL print [0](nil)
 * @head: linked list to be printed
 * Return: number of nodes
 */
size_t print_list(const list_t *head)
{
	size_t node_count = 0;

	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0](nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);
		node_count++;
		head = head->next;
	}
	return (node_count);

}
