#include<stdio.h>

/**
 * main- prints all single digit numbers of base 10
 * Description: starting from 0, followed by a new line
 * Return: (0)
 * putchar used twice in the program
 */
int main(void)
{
	int fourtyeight = 1;

	while (fourtyeight < 10)
	{
		putchar(fourtyeight);
		fourtyeight++;
	}

	putchar('\n');

	return (0);
}
