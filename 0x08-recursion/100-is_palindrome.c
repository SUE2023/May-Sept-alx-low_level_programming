#include"main.h"
#include<stdio.h>
/**
 * is_palindrome - return 1 if a string is palindrome
 * Description: and 0 if not
 * @s: string
 * Return: (0)
 */
int _strlen_recursion(char *s);
int check_pal(char *s, int i, int len);
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen-recursion - returns the lenght of a string
 * @s: string
 * Return (0)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the characters
 * Description: recursively for palindrome
 * @s: string
 * @i: iterator
 * @len: length of the string
 * Return: (0)
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
