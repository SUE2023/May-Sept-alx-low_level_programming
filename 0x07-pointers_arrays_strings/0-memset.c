#include<stdio.h>
/**
 * _memset - fill memory with a constant byte
 * Description: fill memory with a constant byte
 * @n: bytes to be filled
 * @s: pointer to the memory n
 * @b: contant byte to fill memory n
 * Return: (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int digit;

	for (digit = 0; digit < n; digit++)
		s[digit] = b;
	return (s);
}
