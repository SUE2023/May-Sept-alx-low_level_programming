#include<stdio.h>
#include"main.h"
/**
 * print_alphabet – prints the alphabet
 * Description: prints in lowercase followed by newline
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}

