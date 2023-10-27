#include"main.h"
/**
 * print_rev - prints a string, in reverse followed by a new line
 * Description: prints a string in reverse
 * @s; a string with elelments to print
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int o;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (s = length; o > 0; 0--)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\0');
}

