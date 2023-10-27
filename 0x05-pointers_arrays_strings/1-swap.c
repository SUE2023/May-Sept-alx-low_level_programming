#include<stdio.h>
/**
* swap_int - a function that swaps the values of two integers.
*Description: swaping the value of *a and *b
*@*a: first integer to swap
*@*b: second integer to swap
*Return: *b *a
*/
void swap_int(int *a, int *b)
/*a function that swaps the value of integer *a and *b */
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
