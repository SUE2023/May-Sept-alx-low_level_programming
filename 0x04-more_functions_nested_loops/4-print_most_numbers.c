#include"main.h"
#include<stdio.h>
/**
 * print_most_numbers - print numbers 0-9 except 2 and 4
 * Description: prints numbers followed by new line
 * Use _putchar twice in the function
 * Return void
 */
void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 8; number++)
	{
		if (number != 2 && number != 4)
		{
			_putchar(number + '0');
		}
	}
	_putchar('\n');
}
