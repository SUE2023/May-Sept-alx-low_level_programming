#include<stdio.h>
#include<stdlib.h>
#include"main.h"
#include<ctype.h>
/**
 * main - add positive number
 * Description: print the results followed by a newline
 * @argc: number of arguments
 * @argv: array of the commandline
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int index, j, add = 0;

	for (index = 1; index < argc; index++)
	{
		for (j = 0; argv[index][j] != '\0'; j++)
		{
			if (!isdigit(argv[index][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[index]);/* add holds all the added value and results */
	}
	printf("%d\n", add);
	return (0);
}
