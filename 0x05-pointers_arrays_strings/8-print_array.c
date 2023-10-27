#include"main.h"
#include<stdio.h>
/**
 * print_array - prints elements of an array
 * Description: prints elements n of an array
 * @n: number of elements of an array
 * @a: pointer to an array
 * Numbers separated by comma, followed by a space
 * numbers are displayed in the same order in the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int element;

	for (element = 0; element < n; element++)
	{
		printf("%d", a[element]);
						
	if (element != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
