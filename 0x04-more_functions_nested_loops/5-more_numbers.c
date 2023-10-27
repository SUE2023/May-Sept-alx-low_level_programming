#include"main.h"
#include<stdio.h>
/**
 * more_numbers - prints numbers from 0 to 14
 * Description: prints 10 times followed by new line
 * _putchars used only three times in the fuction
 * Return: void
 */
void more_numbers(void)
{
	int row, column;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 14; column++)
		{
			if (column >= 10)
			{
				_putchar((column / 10) + '0');
			}
			_putchar((column % 10) + '0');
		}
		_putchar('\n');
	}
}

