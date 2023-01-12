#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *create_array - creates an array of characters
 *@size: size input
 *@c: character input
 *
 *Return: character
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *k;

	if (size == 0)
	{
		return (NULL);
	}
	k = malloc(sizeof(char) * size);
	if (k == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (j < size)
	{
		k[j] = c;
		j++;
	}
	return (k);
}
