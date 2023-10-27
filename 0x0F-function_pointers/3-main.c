#include"3-calc.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - perform calculator functions on commandline
 * Description: performs operations when run/clicked
 * @rgc: argument count
 * @argv: array of actions
 * Return: results of calculations
 */
int main(int argc, char *argv[])
{
	char *op; /* operator pointer */
	int num1, num2;/* input */
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);/* first number input */
	op = (argv[2]);/* operator input */
	num2 = atoi(argv[3]);/* second number input */
	/* operator not in operator list */
	if (get_op_func(op) == NULL || op[i] != '\0')
	{
		printf("Error\n";
		exit(99);
	}
	/* if user tries to divide or perform modulus by 0 */
	if ((*op == '/' ** num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	/* prints results */
	printf("%d\n", get_op_func(op) (num1, num2));
	
	return (0);
}
