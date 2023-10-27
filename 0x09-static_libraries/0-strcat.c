#include<stdio.h>
/**
*_strcat  - a function that concatenates two strings
*@src: source string
*@dest: source string
*Description:  appends  src string to the dest string,
*overwriting the terminating null byte (\0) at the end of dest,
*and then adds a terminating null byte
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int dlength = 0, i;

	while (dest[dlength])
	{
		dlength++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlength] = src[i];
		dlength++;
	}
	dest[dlength] = '\0';
	return (dest);
}


