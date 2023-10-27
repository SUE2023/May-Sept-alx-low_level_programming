#include<stdio.h>
/**
 * main - prints all the numbers of base 16
 * Description: in lowercase, followed by a new line
 * putchar used 3 times in the program
 * Return: (0)
 */

int main(void)
{
	int digit;
	char alphabets;

	for (digit = 0; digit < 9; digit++)
		putchar(digit);
	for (alphabets = 'a'; alphabets < 'f'; alphabets++)
		putchar(alphabets);

	putchar('\n');
	return (0);
}
