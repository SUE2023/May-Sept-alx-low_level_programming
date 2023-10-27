#include"variadic_functions.h"
/**
 * print_all - prints anything
 * Description: prints all parameters passed to it
 * @format: the paramenter specifier
 * Return: (void)
 */
void print_all(const char * const format, ...)
{
	int i, check_start;
	char *str;
	va_list spc;

	va_start(spc, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(spc, int));
				check_start = 0;
				break;
			case 'f':
				printf("%f", va_arg(spc, double));
				check_start = 0;
				break;
			case 'c':
				printf("%c", va_arg(spc, int));
				check_start = 0;
				break;
			case 's':
				str = va_arg(spc, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default :
				check_start = 1;
				break;
		}
		if (format[i + 1] != '\0' && check_start == 0)
			printf(" ");
		i++;
	}
	printf("\n");
	va_end(spc);

}
