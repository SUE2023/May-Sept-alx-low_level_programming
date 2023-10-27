#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates
 * Description: two strings with value on n
 * @s1: first string
 * @s2: second string
 * @n: int amount to be added to s1 from s2
 * Return: (newstr)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t lens1, lens2, concantinatedstr;
	char *newstr;

	if (s1 == NULL)
		lens1 = 0;
	/* get the length of s1 and s2*/
	else
	{
		for (lens1 = 0; s1[lens1] != '\0'; lens1++)
			;
	}
	if (s2 == NULL)
		lens2 = 0;
	else
	{
		for (lens2 = 0; s2[lens2] != '\0'; lens2++)
			;
	}
	if (lens2 > n)
		lens2 = n;

	newstr = malloc((lens1 + lens2) * sizeof(char) + 1);

	if (newstr == NULL)
		return (NULL);
	/* concantination process */
	for (concantinatedstr = 0; concantinatedstr < lens1; concantinatedstr++)
		newstr[concantinatedstr] = s1[concantinatedstr];
	for (concantinatedstr = 0; concantinatedstr < lens2; concantinatedstr++)
		newstr[concantinatedstr + lens1] = s2[concantinatedstr];
	newstr[lens1 + lens2] = '\0';

	return (newstr);
}
