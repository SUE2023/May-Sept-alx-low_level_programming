#include<stdio.h>

/**
 * startup_function - prints a senstence before main
 * Description: function is executed
 * Return: (void)
 */
void startup_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
int main(void)
{
	printf("Main function prints after initialization funtion\n");
	return (0);
}
