#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be flip two numbers
 * @n: number.
 * @m: number to flip n to.
 *
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned long int b = 0;

	while (xor > 0)
	{
		b += (xor & 1);
		xor >>= 1;
	}

	return (b);
}
