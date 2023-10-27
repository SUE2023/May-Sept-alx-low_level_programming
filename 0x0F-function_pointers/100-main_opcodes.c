#include"function_pointers.h"
#include"3-calc.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_opcodes - prints the opcodes(machine language)
 * Description: of the program
 * @a: address
 * @n: number of bytes
 * Return:(void)
 */
int print_opcodes(void)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n =1)
		{
			printf(" ");
		}
	}
	printf("\n")'
}
/**
 * main - prints the opcodes(machine language)
 * Description: of its own main function
 * @argc: number of count
 * @argv: array of input
 * Return:(0)
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}

