#include<stdio.h>
#include"main.h"
#include<stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * Description:  which contains a copy of the string as a parameter
 * @str: string
 * Return: (ptstr)
 */
char *_strdup(char *str)
{
	char *ptstr;
	char strlength = 0;
	int count;

	/* to know length of the string */
	while (strlength != '\0')
	{
		strlength++;
	}
	/* size in bytes to be allocated */
	ptstr =	(char *)malloc(strlength * sizeof(char) + 1);
	/*check if malloc does not return null */
	if (ptstr == NULL)
	{
		return (NULL);
	}
	/* copying this string to the new memory location */

	for (count = 0; str[count] != '\0'; count++)
	{
		ptstr[count] = str[count];
	}
	ptstr[count] = '\0';
	/*return a pointer to the first element of the string */
	return (ptstr);
}
