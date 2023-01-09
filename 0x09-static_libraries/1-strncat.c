#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 *
 * Return: concatenated string to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_length = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_length + i] = src[i];
	}
	dest[dest_length + i] = '\0';

	return (dest);
}
