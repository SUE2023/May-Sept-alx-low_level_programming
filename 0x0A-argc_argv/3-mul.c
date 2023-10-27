#include<stdio.h>
#include"main.h"
#include<stdlib.h>
/**
 * main - multiplies two numbers
 * Description: print the result of the multiplication, followed by a new line
 * @argc: number of command arguments
 * @argv: array of commandline
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
