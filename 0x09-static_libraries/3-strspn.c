#include"main.h"
/**
 * _strspn - gets the length fo a prefix substring
 * Description: gets the length of a substring
 * @s: string input
 * @accept: string containing character to match
 * Return: (0)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int digit, n, check, value = 0;

	for (digit = 0; s[digit] != '\0'; digit++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[digit] == accept[n])
			{
				value++;
				check = 1;
				break;
			}
		}
		if (check == 0)
		{
			break;
		}
	}
	return (0);
}
