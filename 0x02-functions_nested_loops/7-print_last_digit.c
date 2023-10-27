#include"main.h"
/**
 * print_last_digit - prints the last digit of a number
 * Description: prints the last digit of a number
 * @r: the input value
 * Return: digit
 */
int print_last_digit(int r)
{
	int digit;

	if (r < 0)
	{
		digit = -1 * (r % 10);
	}
	else
	{
		digit = r % 10;
	}
	_putchar(digit + '0');
	return (digit);
}
