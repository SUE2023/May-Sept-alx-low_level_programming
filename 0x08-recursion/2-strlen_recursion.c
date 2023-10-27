#include"main.h"
#include<stdio.h>
/**
 * _strlen_recursion - return the length of a string
 * Description: return length of a string
 * @s: string
 * Return: (0)
 */
int _strlen_recursion(char *s)
{
	int len = 0;
	
	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
