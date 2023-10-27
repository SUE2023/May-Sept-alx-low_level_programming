#include<stdio.h>
#include<stdlib.h>
#include"main.h"

#define ERR_MSG "Error"
/**
 * is_digit - check if a string has non-digit
 * Description: check if a string has non non-digit
 * @s: string to be evaluated
 * Return: (0) if nondigit found and (1)when digit is found
 */
int is_digit(char *s)
{
	int index = 0;

	while (s[index])
	{
		if (s[index] < '0' || s[index] > '9')
			return (0);
		index++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * Description: returns the length of a string
 * @s: string to be measured
 * Return: (0)
 */
int _strlen(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	return (index++);
}

/**
 * error - indicate the main errors
 * Description: indicate error in the program
 * Return: (void)
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiply two positive numbers
 * Description: multiplies two positve numbers
 * @argc: argument count
 * @argv: argument vector that is array
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, newlen, index, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];

	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		error();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	newlen = len1 + len2 + 1;
	result = malloc(newlen * sizeof(int));
		if (!result)
			return (1);
	for (index = 0; index <= len1 + len2; index++)
		result[index] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[newlen] - '0';
		carry = '0';
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
			digit2 = s2[len2] - '0';
		carry += result[len1 + len2 + 1] + (digit1 * digit2);
		result[len1 + len2 + 1] = carry % 10;
		carry /= 10;
	}
	if (carry > 0)
		result[len1 + len2 + 1] += carry;
	for (index = 0; index < newlen - 1; index++)
	{
		if (result[index])
			a = 1;
		if (a)
		_putchar(result[index] + '0');
	}
	if (!a)
	_putchar('0');
	_putchar('\n');
		free(result);
	return (0);
}
