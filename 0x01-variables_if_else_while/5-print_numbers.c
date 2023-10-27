#include<stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * Description:starting from 0, followed by a new line
 * return: (0)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	if (a < 9)
	{
	printf(",");
	}
	printf("\n");
	return (0);
}
