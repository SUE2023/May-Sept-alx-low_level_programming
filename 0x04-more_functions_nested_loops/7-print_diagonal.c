#include"main.h"
#include<stdio.h>
/**
 * print_diagonal - draws diagonal line
 * Description:  _putchar to print character \
 * @n: charactor input
 * Return: void
 */
void print_diagonal(int n)
{
	int row, column;

	for (row = 0; row < n; row++)
	{
		if (n > 1)
			for (column = 0; column < row; column++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}


}
