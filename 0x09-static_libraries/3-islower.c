#include"main.h"
#include<stdio.h>
/**
 * _islower - checks for lowercase character
 * Description: checks for lowercase character
 * @c: input character
 * Return: (1)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
