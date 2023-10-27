#include<stdio.h>
/**
* _strncpy  - a function that copies a string
*@dest: the buffer storing the string copy
*@src: the source string
*@n:  number of bytes to be copied from src
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n ; j++)
	{
		dest[j] = src[j];
	}
	for (j = j; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}

