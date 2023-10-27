#include<stdio.h>
#include"main.h"
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
/**
 * check_num - checks string if there are digits
 * @str: array string
 * Return:(0)
 */
int check_num(char *str)
{
	/*Declaration of variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str))	/*count string */
	{
		if (isdigit(str[count]))	/*check if str has digit */
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: (0) sucess
 */
int main(int argc, char *argv[])
{
	/*Declaration of variables */
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)	/*Goes through the whole array */
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);	/*ATOI --> converts stirng to int */
			sum += str_to_int;
		}
		/*Condition if one of the number contains symbolst that are not digits */
		else
		{
			printf("Error \n");
			return (1);
		}
		count++;
	}
	printf("%d \n", sum);	/* print sum */

	return (0);
}

