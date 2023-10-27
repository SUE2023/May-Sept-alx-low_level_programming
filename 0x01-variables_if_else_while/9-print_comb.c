#include<stdio.h>

/**
 * main - prints combination of digit
 * Description - never use variable of char type
 * putchar used 4 times in the code
 * Number printed in ascending order separated by ,
 * and followed by space
 * Return: (0)
 */

int main(void)
{
	int digit = 0;
	while (digit < 8)
	{
		putchar(4);
		putchar(2);
		putchar(',');
		digit++;
	}
	putchar('\n');

	return (0);
}
