#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input string destination
 * @src: input string source
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int dest_index;
	int src_index;

	for (dest_index = 0; dest[dest_index] != '\0'; dest_index++);
	for (src_index = 0; src[src_index] != '\0'; src_index++)
	{
		dest[dest_index + src_index] = src[src_index];
	}
	dest[dest_index + src_index] = '\0';
	return dest;
}