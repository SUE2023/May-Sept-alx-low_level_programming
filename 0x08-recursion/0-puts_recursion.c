#include"main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * Description: prints a string, followed by a new line
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
/*  define base case */
	if (*s == '\0')	/* Check if at the end of strig */
	{
		_putchar('\n');  /* print next line if end of string */
	}
	else
	{
		_putchar(*s);	/* print the first character of the string */	
		_puts_recursion(++s);	/* recursively print the rest of the characters */
	}
}
