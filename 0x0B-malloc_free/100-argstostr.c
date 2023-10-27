#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * Description: concatenates all the arguments of a program
 * @ac: number of members of av
 * @av: array of the commandline
 * Return: (ptrstr)
 */
char *argstostr(int ac, char **av)
{
	char *ptrstr;
	int index, j, concatenated = 0, length = 0;

	/* Check if ac and av not equal to NULL */
	if (ac == 0 || av == NULL)
		return (NULL);
	/* iterate through the count */
	for (index = 0; index < ac; index++)
	{
		/* to know the length of the vector (av) */
		for (j = 0; av[index][j]; j++)
			length++;
	}
	length += ac;

	ptrstr = malloc(length * sizeof(char) + 1);
	if (ptrstr == NULL)
		return (NULL);
	/* contatenation process */
	for (index = 0; index < ac; index++)
	{
		for (j = 0; av[index][j]; j++)
		{
			ptrstr[concatenated] = av[index][j];
			concatenated++;
		}
		if (ptrstr[concatenated] == '\0')
		{
			ptrstr[concatenated++] = '\n';
		}
	}

	return (ptrstr);
}
