#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - multiplies two integers
 *@argc: number of the arguments
 *@argv: array of pointers to the strings
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int j = 2;
	int c = 3;

	if (argc != c)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[i]) * atoi(argv[j]));
	return (0);
}
