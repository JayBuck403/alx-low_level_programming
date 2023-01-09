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

/**
 * _strlen - computes the length of a string
 * @s: string input
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
