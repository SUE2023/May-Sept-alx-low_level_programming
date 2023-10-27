#include<stdio.h>

/**
 * main - prints the lowercase alphabet
 * Description:in reverse, followed by a new line
 * uses putchar twice in the program
 * Return: (0)
 */

int main(void)
{
	int alphabet;
	
	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
