#include"main.h"
#include<stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * Description: returns the natural square root of a number
 * @n: input
 * Return: (0)
 */
int _sqrt_recursion(int n)
{
	int sqrt_fun(int n, int sq);

	int sq = 1;

	return (sqrt_fun(n, sq));
}
/* compare the number to the square of various number recursively */

int sqrt_fun(int n, int sq)
{
	if (n == sq * sq)	/* Base case defined */
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (sqrt_fun(n, ++sq));
	}
	else
	{
		return (-1);
	}
}

