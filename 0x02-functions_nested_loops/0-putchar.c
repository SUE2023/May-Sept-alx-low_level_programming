#include<stdio.h>
/**
 * main – print _putchar
 * Description: followed by a new line
 * Return: (0)
 */
int main(void)
{
	/*printing of _putchar by use of a string */
	int character;
	char c[] = "_putchar";

	for (character = 0; character <= 8; character++)
	{
		putchar(c[character]);
	}
	putchar('\n');

	return (0);
}

