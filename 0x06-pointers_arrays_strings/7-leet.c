#include<stdio.h>
/**
 * leet - encodes a string into 1337
 * @str: a string to be encoded
 * return: (str) encoded string
 */
char *leet(char *str)
{
	int i, j;
	char c[] = "aAeEoOtTlT";
	char d[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = d[j];
			}
		}
	}

	return (str);
}
