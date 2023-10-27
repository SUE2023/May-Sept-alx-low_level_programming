#include<stdio.h>
/**
 *string_toupper: changes lowercase to uppercase
 *Description: changes all lowercase letters to uppercase
 *str: string input to be converted
 *j: the index reference
 *return: str
 */
char *string_toupper(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = str[j] - 32;
		}
	}

	return (str);

}
