#include"main.h"
/**
 * puts_half - prints half of the string
 * Description: prints the second half of the string
 * @str: string whose second half elemets being printed
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int half, secondhalf;
	
	while (str[length] != '\0')
	{
		length++;
	}
	half = (length - 1) / 2;
	
	for (secondhalf = (half + 1); secondhalf < length; secondhalf++)
	{
		_putchar(str[secondhalf]);
	}
}
