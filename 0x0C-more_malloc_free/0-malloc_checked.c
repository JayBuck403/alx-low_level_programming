#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocates memory
 *@b: size of memory to be allocated
 *
 *Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
