#include<stdio.h>
#include"main.h"
#include<stdlib.h>
/**
 * main - prints the number of arguments
 * Description: passed into it
 * @argc: number of arguments
 * @argv: array taht contains the commandline arguments
 * Return: (0)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
