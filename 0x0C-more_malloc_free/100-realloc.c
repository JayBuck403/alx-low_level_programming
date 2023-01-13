#include <stdlib.h>
#include "main.h"

/**
 *_realloc - reallocates a memory block
 *@ptr: pointer input
 *@old_size: integer input
 *@new_size: integer input
 *
 *Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == 0)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);

	return (ptr);
}
