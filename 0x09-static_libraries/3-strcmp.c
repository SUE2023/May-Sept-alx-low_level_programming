#include<stdio.h>
/**
 *_strcmp - a function that compares two strings
 *Description - compares two strings s1 and s2
 *@s1: string to be compared
 *@s2: string to be compared
 *Return: (0) if they the same and b if not
 */
int _strcmp(char *s1, char *s2)
{
	int j;
	int b = 0;

	for (j = 0; s1[j] != '\0' && b == 0; j++)
	{
		b = s1[j] - s2[j];
	}
	return (b);
}
