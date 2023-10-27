#include"main.h"
#include<stdio.h>
/**
 * print_line - draws straight line in the terminal
 * Description: uses _putchar to print and character _
 * @n: input integer
 * Return: void
 */
void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
