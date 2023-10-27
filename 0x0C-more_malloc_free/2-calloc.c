#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory
 * Description: for an array, using malloc
 * @nmemb: number of arraymember(count)
 * @size: length of array
 * Return: (void)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptrcalloc;
	size_t index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptrcalloc = malloc(nmemb * size);

	if (ptrcalloc == NULL)
		return (NULL);
	for (index = 0; index < (nmemb * size); index++)
		ptrcalloc[index] = 0;
	return (ptrcalloc);
}
