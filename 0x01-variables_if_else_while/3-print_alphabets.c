#include<stdio.h>

/**
 * main -Prints alphabets
 * Description:lowercase then uppercase then new line
 * Use of putchar three times
 * Return: (0)
 */

int main(void)
{
	int alphabets;
	
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
	{
		putchar(alphabets);
		putchar('\n');
	}

}
