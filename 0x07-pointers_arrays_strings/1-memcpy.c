#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area destination to copy to
 * @src: memory area souce to copy from
 * @n: number of bytes to copy from memory area
 *
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int  i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
