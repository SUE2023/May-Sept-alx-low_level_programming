#include"main.h"
#include<stdio.h>
/**
 * is_prime_number - returns 1 if input integer is
 * Description: a prime number
 * @n: input
 * Return: (0)
 */
int actual_prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));

}
/**
 * actual_prime - calcualtes if a number is prime
 * Description: recursively
 * @n: input
 * @i: iterator
 * Return: (0)
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
