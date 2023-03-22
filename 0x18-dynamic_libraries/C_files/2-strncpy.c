#include "main.h"

/**
 * *_strcpy - copies a string
 * @dest: destination iput
 * @src: source input to copy from
 * @n: bytes to copy
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
