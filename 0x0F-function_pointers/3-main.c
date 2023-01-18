#include "3-calc.h"


/**
 * main - performs simple operations
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int (*ptr)(int, int);
	int i;
	int j;
	int k;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	ptr = get_op_func(argv[2]);
	k = ptr(i, j);

	printf("%d\n", j);
	return (0);
}
