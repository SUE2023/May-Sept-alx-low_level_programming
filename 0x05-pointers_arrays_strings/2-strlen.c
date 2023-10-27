#include<stdio.h>
#include"main.h"
/**
 * _strlen - returns the length of a string
 * Description: the lenght of a string
 * @str: String to get its length
 * Return: int
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
	length++;
	return (length);
}

