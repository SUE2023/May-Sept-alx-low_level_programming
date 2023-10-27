#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc -  reallocates a memory block
 * Description: using malloc and free
 * @ptr: former pointer to heap memmory
 * @old_size: former heap size
 * @new_size: new heap size
 * Return: newptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	size_t index, max = new_size;
	char *oldptr = ptr;

	if (ptr == NULL)
	{
		newptr = malloc(new_size);
			return (newptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (index = 0; index < max; index++)
		newptr[index] = oldptr[index];
	free(ptr);
	return (newptr);
}
