#include<stdio.h>

/**
 * cap_string -  capitalizes all first char of a word
 * @*str - string to which it each word be capilized
 * All seperators of sentenses and words are used.
 * Return (0) for success
 * /
char *cap_string(char *)
{	
	int i,j;
	char c[] = {44, 59, 46, '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	for (j = 0; c[j] != '\0'; j++)
	{
		if (c[j] == str[i] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] = str [i + 1] - 32;
		}
	}
	}
	
	return (str);
}

