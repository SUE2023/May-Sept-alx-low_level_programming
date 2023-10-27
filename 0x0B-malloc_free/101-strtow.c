#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * ch_free_grid - frees the grid
 * Description: frees malloc grid
 * @grid: heap memory
 * @height: input
 * Return: (void)
 */
void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		{
			free(grid[height]);
			free(grid[height]);
			free(grid);
		}
	}

}
/**
 * strtow - splits a string into words
 * Description: splits a string into words
 * @str: - string
 * Return: (ptrstrtow)
 */
char **strtow(char *str)
{
	char **ptrstrtow;
	size_t c, height, index, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if ((str[c] != ' ') && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	{
		ptrstrtow = malloc(height * sizeof(char *) + 1);
	}
		if (ptrstrtow == NULL)
		{
			free(ptrstrtow);
			return (NULL);
		}
	for (index = a1 = 0; index < height; index++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if ((str[c] != ' ') && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				ptrstrtow[index] = malloc((c - a1 + 2) * sizeof(char));
				if (ptrstrtow[index] == NULL)
				{
					ch_free_grid(ptrstrtow, index);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			ptrstrtow[index][j] = str[a1];
		ptrstrtow[index][j] = '\0';

	}
	ptrstrtow[index] = NULL;
	return (ptrstrtow);
}
