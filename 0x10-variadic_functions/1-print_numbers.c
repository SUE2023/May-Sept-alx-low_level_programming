#include"variadic_functions.h"
/**
 * print_numbers - prints numbers
 * Description: prints numbers
 * @separator: string to be printed
 * @n: count of the integers to be printed
 * Return: (void)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, holder;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		holder = va_arg(ptr, const unsigned int);
		printf("%d", holder);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
