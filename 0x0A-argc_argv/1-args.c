#include <stdio.h>
#include "main.h"

/**
 *main - prints number of arguments
 *@argc: count of the arguments supplied to the program
 *@argv: array of pointers to the strings
 *
 *Return: 0
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
