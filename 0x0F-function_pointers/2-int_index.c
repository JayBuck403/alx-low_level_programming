#include "function_pointers.h"

/**
 * int_index - function to search foran integer
 * @array: array input
 * @size: integer input
 * @cmp: callback function
 *
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
