#include"main.h"
#include<stddef.h>
/**
 * _strchr - locates a character in a string
 * Description: locates a character in a string
 * @c: character to be allocated
 * @s: string with the character
 * Return:(NULL)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
