#include"main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase
 * Description: prints 10 times followed by a new line
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int number;

	for (number = 0; number < 10; number++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
