#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * str_concat - concatenates
 * Destripton: two string
 * @s1: first string
 * @s2: second string
 * Return: (pt)
 */
char *str_concat(char *s1, char *s2)
{
	char *pt;
	size_t strlength1, strlength2, str1, str2;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	/* finding length of string 1 and 2 */
	strlength1 = 0;
	while (s1[strlength1] != '\0')
		strlength1++;

	strlength2 = 0;
	while (s2[strlength2] != '\0')
		strlength2++;

	pt = (char *)malloc((strlength1 + strlength2) * sizeof(char) + 1);
	/* check if memory allocation was succesful */
	if (pt == NULL)
	{
		free(pt);
		return (NULL);
	}
	/* adding up the two strings */
	for (str1 = 0; str1 < strlength1; str1++)
		pt[str1] = s1[str1];
	for (str2 = 0; str2 <= strlength2; str2++)
	{
		pt[str1] = s2[str2];
		str1++;
	}
	return (pt);
}
