#include"function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * Description: on each element of an array
 * @array: input array to be iterated
 * @size: size of the array
 * @action: pointer function to array
 * Return: (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;/* to increase the character of an array */
	}
}
