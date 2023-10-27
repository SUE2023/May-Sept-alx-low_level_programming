#include"main.h"
#include<stdio.h>
/**
 * print_numbers - prints the numbers from 0 to 9
 * Description; print numbers followed by new line
 * Return: void
 */
void print_numbers(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}
