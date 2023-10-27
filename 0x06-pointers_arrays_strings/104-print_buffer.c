#include<stdio.h>
#include"main.h"
/**
 * print_buffer - prints content of a buffer
 * Description:prints content of size bytes of a buffer
 * @size: is the buffer size
 * @b: is the bufffer poiner
 * return:(0) success
 */
void print_buffer(char *b, int size)
{
	int o, j, i;

	o = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		j = size - o < 10 ? size - o : 10;
		printf("%08x: ", 0);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + o + i));
			else
				printf(" ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + o + i);

			if (c < 32 || c > 132)
			{
			c = '.';
			}
			printf("%c", c);
		}
	}
	printf("\n");
	o += 10;
}
