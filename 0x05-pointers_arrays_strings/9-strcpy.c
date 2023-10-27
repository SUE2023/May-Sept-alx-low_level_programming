#include"main.h"
/**
 * _strcpy - function that copies the string pointed
 * Description: copies string pointed and stored in buffer
 * @src: string to be copied
 * @dest: buffer to carry the copied string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int element;

	for (element = 0; src[element] != '\0'; element++)
	{
		dest[element] = src[element];
	}
	dest[element]  = '\0';

	return (dest);
}
