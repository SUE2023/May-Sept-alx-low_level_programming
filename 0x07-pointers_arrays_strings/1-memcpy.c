#include"main.h"
/**
 * _memcpy - copy memory area
 * Description:copy memory area
 * @dest: pointer to memory destination
 * @n: memory bytes copied
 * @src: memory area to be copied
 * Return:(dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int digit;

	for (digit = 0; digit < n; digit++)
		dest[digit] = src[digit];

	return (dest);

}
