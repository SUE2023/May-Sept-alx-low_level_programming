#include"main.h"
/**
 * print_rev_recursion -  prints a string in reverse
 * Descrription:  prints a string in reverse
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
/* check if it is the end string and print newline */
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{	/* print the next character */
		_print_rev_recursion(++s);
		_putchar(*s);	/*print the current character*/
	}
}
