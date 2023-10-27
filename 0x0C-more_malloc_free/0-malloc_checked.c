#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocate memory
 * Description: using malloc
 * @b: input
 * Return: (void)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

