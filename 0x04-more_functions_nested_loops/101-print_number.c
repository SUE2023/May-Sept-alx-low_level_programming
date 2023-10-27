#include"main.h"
/**
 * print_number - prints integers
 * Description: prints inters passed to it
 * @n: integer passed
 * Return: (void)
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)/* meaning it is negative */
	{
		_putchar(45); /* ASCII number for sign negative */
		i = -i;
	}
	if (i / 10)/* meaning it has more than one digit */
	{
		print_number(i / 10);/* recursion/function call itself */
	}
	_putchar(i % 10 + '0');/* '0' added to convert to ASCII */
}
