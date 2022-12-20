#include "main.h"

/**
 * _strcpy - copies a string pointed to by src ti destination
 * @dest: destination to copy to
 * @src: source to copy from
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
