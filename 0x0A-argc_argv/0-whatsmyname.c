#include<stdio.h>
#include<string.h>
#include"main.h"
/**
 * main - print its name
 * Description: follwed by a new line
 * @argc: member of argument
 * @argv: array of commandline argument
 * Return: (0)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
