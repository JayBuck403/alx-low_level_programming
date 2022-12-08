#include <stdio.h>

/**
 * main - Prints the size of various data types
 *Return: 0
 */

int main(void)
{
	char str = ' ';
	int my_num = 5;
	long my_long = 0;
	long long my_long_long = 0;
	float my_float = 0.00f;

	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of a int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(my_long_long));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
