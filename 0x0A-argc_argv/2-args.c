#include<stdio.h>
#include"main.h"
/**
 * main- prints its name and all the arguments it receives
 * Description: followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments passed on the commandline
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}

