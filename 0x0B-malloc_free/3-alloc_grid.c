#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * alloc_grid - returns a pointer
 * Description: to a 2 dimensional array of integers
 * @width: input number of columns
 * @height: input number of rows
 * Return: (ptrgrid)
 */
int **alloc_grid(int width, int height)
{
	int row, column, **ptrgrid;

	if (width <= 0 || height <= 0)
		return (NULL);
	/* reserving space at heap memory */
	ptrgrid = malloc(height * sizeof(int *));
	if (ptrgrid == NULL)
	{
		free(ptrgrid);
		return (NULL);
	}
	/* find the size of height that is number of rows */
	for (row = 0; row < height; row++)
	{
		ptrgrid[row] = malloc(width * sizeof(int));
		if (ptrgrid[row] == NULL)
		{
			for (row--; row >= 0; row--)
			free(ptrgrid[row]);
			free(ptrgrid);
			return (NULL);
		}
	}
	for (row = 0; row < height; row++)
		for (column = 0; column < width; column++)
		       ptrgrid[row][column] = 0;

	return (ptrgrid);
}
