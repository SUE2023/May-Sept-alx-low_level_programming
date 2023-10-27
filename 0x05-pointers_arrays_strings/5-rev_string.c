#include"main.h"
/**
 * rev_string: a function that reverses a string
 * Description: prints a string to standard out
 * @s : a string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter ; i++)
	{
		counter = 0;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
