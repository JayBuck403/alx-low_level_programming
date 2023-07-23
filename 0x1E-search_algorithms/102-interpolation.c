#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, otherwise -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t left, mid, right;

	if (array != NULL && size > 0)
	{
		left = 0;
		right = size - 1;
		while (array[left] != array[right])
		{
			mid = left + (((double)(right - left) / (array[right] - array[left])) * (value - array[left]));
			if (mid < left || mid > right)
			{
				printf("Value checked array[%lu] is out of range\n", mid);
				break;
			}
			printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
			if (array[mid] < value)
				left = mid + 1;
			else if (array[mid] > value)
				right = mid - 1;
			else
				return (mid);
		}
	}
	return (-1);
}
