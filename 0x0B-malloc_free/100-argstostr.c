#include <stdlib.h>
#include "main.h"

/**
 *argstostr - concatenates all arguments of the program
 *@ac: integer input
 *@av: character input
 *
 *Return: pointer
 */

char *argstostr(int ac, char **av)
{
	char *c;
	int i;
	int j;
	int size = 0;
	int k = 0;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			size++;
		}
		size++;
	}
	size++;

	c = malloc(size);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			c[k] = av[i][j];
			k++;
		}
		c[k] = '\n';
		k++;
	}
	c[k] = '\0';
	return (c);
}
