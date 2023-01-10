#include "main.h"
#include <stdio.h>

/**
 *main - prints the name of the program
 *@argc: count of the arguments supplied to the program
 *@argv: array of pointers to the strings
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
