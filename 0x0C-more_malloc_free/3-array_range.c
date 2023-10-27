#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array
 * Description: of integers
 * @min: least number
 * @max: higheest number
 * Return: (ptr)
 */
int *array_range(int min, int max)
{
	int *ptr;
	int index, l;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	ptr = malloc(sizeof(int) * l);
	if (ptr == NULL)
		return (NULL);
	for (index = 0; index < l; index++)
	{
		ptr[index] = min;
		min++;
	}
	return (ptr);
}
