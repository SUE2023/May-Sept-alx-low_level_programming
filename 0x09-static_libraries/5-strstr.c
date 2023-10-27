#include"main.h"
/**
 * _strstr -  locates a substring
 * Description: first occurance of substring in a string
 * @needle: substring
 * @haystack: string
 * Return: (0)
 */
char *_strstr(char *haystack, char *needle)
{
	char *one = haystack;
	char *two = needle;

	for (; *haystack != '\0'; haystack++)
	{
		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (0);
}
