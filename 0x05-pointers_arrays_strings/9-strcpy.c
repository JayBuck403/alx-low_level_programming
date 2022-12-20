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
	char *ret_ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ret_ptr);
}
