#include"main.h"
/**
 * puts2 - print all even numbers
 * Description: prints even numbers in a string
 * @str: string with members being printed
 * return; void
 */
void puts2(char *str)
{
	int firstelement;

	for (firstelement = 0; str[firstelement] != '\0'; firstelement++)
	{
		if (firstelement % 2 == 0)
		{
			_putchar(str[firstelement]);
		}
	}
	_putchar('\n');
}
