#include<stdio.h>
#include"main.h"
/**
 * rev_string - reverse array
 * Description: reserse elements of a string
 * @n: integer parameter
 * return: void
 */
void rev_string(char *n)
{
	int beginning = 0;
	int end = 0;
	char temp;

	while (*(n + beginning) != '\0')
	{
		beginning++;
	}
	for (end = 0; end < beginning; end++, beginning--)
	{
		temp = *(n + end);
		*(n + end) = *(n + beginning);
		*(n + beginning) = temp;
	}
}
/**
 * infinite_add - a function that adds two numbers
 * Description: adds two numbers in a string function
 * @n1: firstnumber to be add
 * @n2: second number to be add
 * @r: buffer that will store results
 * @size_r: the buffer size
 * return: (r) if result is store
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, beginning = 0, end = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + beginning) != '\0')
		beginning++;
	while (*(n2 + end) != '\0')
		end++;

	beginning--;
	end--;
	if (end >= size_r || beginning >= size_r)
		return (0);
	while (end >= 0 || beginning >= 0 || overflow == 1)
	{
		if (beginning < 0)
			val1 = 0;
		else
			val1 = *(n1 + beginning) - '0';
		if (end < 0)
			val2 = 0;
		else
			val2 = *(n2 + end) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		end--;
		beginning--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
