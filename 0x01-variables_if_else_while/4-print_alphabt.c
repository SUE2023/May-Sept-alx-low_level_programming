#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 * Description: q and e ommitted
 * Use putchar only 2 in the code
 * Return: (0)
 */

int main(void)
{
	char alphabet, q, e;

	q = 'q';
	e = 'e';
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != e && alphabet != q)
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
