#include<stdio.h>
#include"main.h"
#include<stdlib.h>
/**
 * main - print the minimum number of coin
 * Description: to make change for am amount
 * @argc: number of commandline
 * @argv: array of commandline
 * Return: (0)
 */
int main(int argc, char **argv)
{
	int cents, minicoin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		minicoin += 1;	/* hold the change */
	}
	printf("%d\n", minicoin);
	return (0);
}
