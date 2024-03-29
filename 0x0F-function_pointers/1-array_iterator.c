#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 * @array: array input
 * @size: size input
 * @action: callback function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
