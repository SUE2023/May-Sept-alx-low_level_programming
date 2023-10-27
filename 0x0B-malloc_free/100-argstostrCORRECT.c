#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * argstostr - concatenates
 * Description: all the arguments of a program
 * @ac: name of program
 * @av: pointer to ponter
 * Return:(ptstr)
 */
char *argstostr(int ac, char **av)
{
	char *ptstr;
	int count = ac, row, column;
	/* count total number of strings(rows and columns) */
	/* length of each string */
	for (row = 0; row < count; row++)
	{
	/*each row becomes av[row] */
	}
	for (column = 0; av[row][column] != '\0'; column++, count++)
	{
		count++;
	}

	/*makes room for the new line characther */
	/* printf("%d \n", count; */
	/* allocate space for all the strings */
	ptstr = (char *)malloc(count * sizeof(char));
	if (ptstr == NULL)
		return (NULL);
	/*concatenate all the strings */
	for (row = 0; row < count; row++)
	{
		for (column = 0; av[row][column] != '\0'; column++)
		{
			ptstr[count] = av[row][column];
			count++;
		}
		ptstr[count] = '\0';
	}
	return (ptstr);
}
