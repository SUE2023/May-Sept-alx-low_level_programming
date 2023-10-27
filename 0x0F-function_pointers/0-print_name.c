#include"function_pointers.h"
#include<stddef.h>
/**
 * print_name - prints a name
 * Description: prints a name
 * @name: name to be printed
 * @f: function pointer to a string name
 * Return: (void)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
