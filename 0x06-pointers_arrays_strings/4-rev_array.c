#include<stdio.h>
/**
 * reverse_array - reverses the content of an array of integers
 * Description - prints the array elements in reverse
 * @n: is the number of elements fo an array
 * @a: is the point to an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j = 0, temp;

	n = n - 1;

	for (j = 0; j < n; j++)
	{
		temp = a[j];
		a[j] = a[n];
		a[n] = temp;
		n--;
	}
}
