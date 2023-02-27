#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: binary number in form of string
 *
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int pow;
	unsigned int val;
	unsigned int sum;
	const char *p;

	p = b;
	while (*b != '\0')
	{
		b++;
	}
	b--;

	pow = 0;
	sum = 0;
	while (b >= s)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		i = *b - '0';
		val = i * (1 << pow);
		b--;
		pow++;
	}
	return (sum);
}
