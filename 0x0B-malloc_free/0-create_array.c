#include<stdio.h>
#include"main.h"
#include<stdlib.h>
/**
 * create_array - creates an array of chars
 * Description: and initializes it with a specific char
 * @size: array size
 * @c: data input
 * Return:NULL -char * point
 */
char *create_array(unsigned int size, char c)
{
	char *ptArray;
	unsigned int count;

	/* Allocating space for all array members */
	ptArray = (char *)malloc(size * sizeof(char));

	/*put a char c in each of the memory lcoations */
	for (count = 0; count < size; count++)
	{
	/* assign the character to the specific memory allocation */
		ptArray[count] = c;
	}
	return (ptArray);
}
